Question- 10  What is trigger and how to create a Trigger in SQL?
Answer= 
• Trigger is a statement that a system executes automatically when there is any modification to the database. 
• In a trigger, we first specify when the trigger is to be executed and then the action to be performed when the trigger executes. 
• Triggers are used to specify certain integrity constraints and referential constraints that cannot be specified using the constraint mechanism of SQL. 
• Trigger: A trigger is a stored procedure in database which automatically invokes whenever a special event in the database occurs. 
• For example, a trigger can be invoked when a row is inserted into a specified table or when certain table columns are being updated. 

• Syntax:
create trigger [trigger_name] 
[before | after]  
{insert | update | delete}  
on [table_name]  
[for each row]  
[trigger_body]
 
• Explanation of syntax:
create trigger [trigger_name]: Creates or replaces an existing trigger with the trigger_name.
[before | after]: This specifies when the trigger will be executed.
{insert | update | delete}: This specifies the DML operation.
on [table_name]: This specifies the name of the table associated with the trigger.
[for each row]: This specifies a row-level trigger, i.e., the trigger will be executed for each row being affected.
[trigger_body]: This provides the operation to be performed as trigger is fired..