import mysql.connector

# ---------------------------
# a) Create a database TRAINING_DB
# ---------------------------
mydb = mysql.connector.connect(
    host="localhost",
    user="root",         # replace with your MySQL username
    password="password"  # replace with your MySQL password
)

mycursor = mydb.cursor()

# Create database if not exists
mycursor.execute("CREATE DATABASE IF NOT EXISTS TRAINING_DB")

print("Database TRAINING_DB created successfully!")

# ---------------------------
# b) Set connection with TRAINING_DB
# ---------------------------
mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    password="password",
    database="TRAINING_DB"
)

mycursor = mydb.cursor()

# ---------------------------
# c) Create a table EMP_TRAINING
# ---------------------------
mycursor.execute("DROP TABLE IF EXISTS EMP_TRAINING")  # to start fresh

mycursor.execute("""
    CREATE TABLE EMP_TRAINING (
        FIRST_NAME VARCHAR(50),
        LAST_NAME VARCHAR(50),
        AGE INT,
        GENDER CHAR(1),
        INCOME FLOAT
    )
""")

print("Table EMP_TRAINING created successfully!")

# ---------------------------
# d) Change table structure
# ---------------------------

# i) Add column ADDRESS
mycursor.execute("ALTER TABLE EMP_TRAINING ADD COLUMN ADDRESS VARCHAR(100)")
print("Column ADDRESS added!")

# ii) Insert a record
sql = """INSERT INTO EMP_TRAINING 
         (FIRST_NAME, LAST_NAME, AGE, GENDER, INCOME, ADDRESS) 
         VALUES (%s, %s, %s, %s, %s, %s)"""
val = ("John", "Doe", 25, "M", 50000, "New Delhi")
mycursor.execute(sql, val)
mydb.commit()
print("Record inserted successfully!")

# iii) Update: increase AGE by 1 where GENDER = 'M'
update_sql = "UPDATE EMP_TRAINING SET AGE = AGE + 1 WHERE GENDER = 'M'"
mycursor.execute(update_sql)
mydb.commit()
print("All male ages updated!")

# iv) Delete: remove records where AGE < 18
delete_sql = "DELETE FROM EMP_TRAINING WHERE AGE < 18"
mycursor.execute(delete_sql)
mydb.commit()
print("Records with AGE < 18 deleted!")

# ---------------------------
# Verify table contents
# ---------------------------
mycursor.execute("SELECT * FROM EMP_TRAINING")
for row in mycursor.fetchall():
    print(row)
