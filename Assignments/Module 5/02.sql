Question-02 What is Normalization?
Answer= 
• Normalization is the process of minimizing redundancy (duplicity) from a relation or set of relations.
• Redundancy in relation may cause insertion, deletion and updation anomalies. So, it helps to minimize the redundancy in relations.

• Most Commonly used normal forms:

•••First Normal Form:
• First normal form(1NF) Second normal form(2NF) Third normal form(3NF) Boyce & Code normal form (BCNF)
• If a relation contain composite or multi-valued attribute, it violates first normal form or a relation is in first normal form if it does not contain any composite or multi-valued attribute.
• A relation is in first normal form if every attribute in that relation is singled valued attribute.

•••Second Normal Form:
• To be in second normal form, a relation must be in first normal form and relation must not contain any partial dependency.
• relation is in 2NF if it has No Partial Dependency, i.e., no non-prime attribute (attributes which are not part of any candidate key) is dependent on any proper subset of any candidate key of the table.
• Partial Dependency – If the proper subset of candidate key determines non-prime attribute, it is called partial dependency.

•••Third Normal Form:
• A relation is in third normal form, if there is no transitive dependency for non-prime attributes as well as it is in second normal form.
• A relation is in 3NF if at least one of the following condition holds in every non-trivial function dependency X –> Y
X is a super key.
Y is a prime attribute (each element of Y is part of some candidate key).
• Transitive dependency – If A->B and B->C are two FDs then A->C is called transitive dependency.
