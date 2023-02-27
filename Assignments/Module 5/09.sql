Question- 09  What is save Point? How to create a save Point write a Query?
Answer= 
• The SAVEPOINT in MySQL is used for dividing (or) breaking a transaction into multiple units so that the user has a chance of roll backing the transaction up to a specified point. 
• That means using Save Point we can roll back a part of a transaction instead of the entire transaction.
• The SAVEPOINT statement in MySQL is used to save a transaction temporarily.  
• We can save multiple SAVEPOINT in a single transaction. We can ROLLBACK the transaction to a given SAVEPOINT and the transaction after that SAVEPOINT are revert back to its previous state. 
• We cannot ROLLBACK to a SAVEPOINT after the COMMIT statement.
• In order to create a save point or you can say logical point, we need to use the SAVEPOINT command followed by the save point name i.e. SAVEPOINT SAVEPOINT_NAME and ROLLBACK to the SAVEPOINT are ROLLBACK TO SAVEPOINT_NAME.