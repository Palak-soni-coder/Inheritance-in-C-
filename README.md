# EXPERIMENT 14 - Access Specifiers & Inheritance in C++

**Name:** Palak Soni  
**PRN:** 24070123069  
**Class:** ENTC A  
**Title:** Access Specifiers and Types of Inheritance  

---


## Theory

### 1. Access Specifiers in C++

Access specifiers define the **visibility and accessibility** of class members (variables and functions) in C++. There are three main types:

#### a) Public
- Members are accessible **inside the class, derived classes, and main() function**.
- Example: `public` member can be accessed anywhere.

#### b) Private
- Members are accessible **only inside the class**.
- **Not accessible** in derived classes or main() directly.
- To access private members, we use **public setter/getter functions**.

#### c) Protected
- Members are accessible **inside the class and derived classes**.
- **Not accessible in main()**.

**Summary Table:**

| Access Specifier | Inside Class | Derived Class | Outside Class |
|-----------------|-------------  |---------------|---------------|
| Public          |  Yes          |  Yes          |  Yes          |
| Private         |  Yes          |  No           |  No           |
| Protected       |  Yes          |  Yes          |  No           |

---

## 2. Inheritance in C++

Inheritance is one of the core features of **Object-Oriented Programming (OOP)**.  
It allows a **new class (child/derived class)** to **reuse the properties and behaviors** of an existing class (**parent/base class**).

By using inheritance, we can **avoid code duplication** and create a **hierarchical relationship** between classes, similar to real-world objects.

#### Key Features of Inheritance:
1. **Code Reusability** – Derived classes can reuse base class members.  
2. **Hierarchical Representation** – Models “is-a” relationships like Car → Vehicle.  
3. **Extensibility** – Child classes can add new members or override base class functions.  

## Types of Inheritance
1. **Single Inheritance**: One parent, one child.
**Definition:**  
Single inheritance is a type of inheritance where **one derived class inherits from a single base class**.  
**Key Points:**  
- Only one base class involved.  
- Simple and easy to implement.  
- Derived class can access **public and protected members** of the base class.  
- Private members of the base class are **not directly accessible**.
**Purpose:**  
It allows the derived class to **reuse the data members and functions** of the base class, promoting **code reusability**.  

**Example:**  
A `Student` class as the base class and an `Exam` class as the derived class. The `Exam` class inherits the student's name and roll number and adds marks.


 
2. **Multiple Inheritance**: One child inherits from **multiple parents**.
 **Definition:**  
Multiple inheritance is a type of inheritance where **a derived class inherits from two or more base classes**.  
**Key Points:**  
- Derived class inherits members from **multiple base classes**.  
- Public and protected members of base classes are accessible in the derived class.  
- Care must be taken to avoid ambiguity (like when multiple base classes have members with the same name).  
- Enhances **modularity** by combining functionalities.
**Purpose:**  
It allows the derived class to **combine properties and behaviors from multiple base classes**, promoting **code reuse and flexibility**.

**Example:**  
A `Manager` class inherits from both `Employee` (name, id) and `Salary` (salary) classes, combining information from both. 


3. **Multilevel Inheritance**: Chain of inheritance, e.g., Parent → Child → Grandchild.
**Definition:**  
Multilevel inheritance is a type of inheritance where **a class is derived from another derived class**, forming a chain of inheritance.  
**Key Points:**  
- Inheritance occurs in a **chain**.  
- Derived class can access **public and protected members** of its base and ancestor classes.  
- Promotes **progressive extension** of classes.  
- Private members of base classes remain **inaccessible** to derived classes.
**Purpose:**  
It allows a class to **inherit properties and behaviors from a base class through an intermediate derived class**, supporting hierarchical relationships.

**Example:**  
`Gadget → Smartphone → GamingSmartphone`  
- `Gadget` has the brand  
- `Smartphone` adds the model  
- `GamingSmartphone` adds specifications like battery, RAM, and storage
    
4. **Hierarchical Inheritance**: One parent, multiple children.
**Definition:**  
Hierarchical inheritance is a type of inheritance where **multiple derived classes inherit from a single base class**.  
**Key Points:**  
- One base class, multiple derived classes.  
- Derived classes inherit **public and protected members** of the base class.  
- Each derived class can have **additional unique members**.  
- Promotes **code reusability and modular design**.

**Purpose:**  
It allows multiple child classes to **reuse common properties and functions** from the same base class while having their **own unique features**.

**Example:**  
A `Vehicle` class as the base class and `Car, Bike, Truck, Bus` as derived classes. Each derived class adds its own unique attributes:

- `Car` → seats  
- `Bike` → engine capacity (CC)  
- `Truck` → load capacity  
- `Bus` → number of passengers
---

## 3. Code Summary and Algorithms

### 1 Access Specifiers Example

**Summary:**  
Class `Vehicle` demonstrates **private, protected, and public** members with a derived class `Car`.

**Algorithm:**  
1. Create class `Vehicle` with private, protected, and public members.  
2. Use a public function to set private and protected members.  
3. Derive class `Car` from `Vehicle`.  
4. Create member function in `Car` to display data.

---

### 2 Single Inheritance Example

**Summary:**  
Class `Student` is parent, `Exam` is child. `Exam` adds `marks` to inherited `name` and `roll`.

**Algorithm:**  
1. Create class `Student` with protected members `name` and `roll`.  
2. Create public functions to set and display student data.  
3. Create class `Exam` derived from `Student`.  
4. Add marks as child class member.  
5. Display student info along with marks in main().

---

### 3 Multiple Inheritance Example

**Summary:**  
`Manager` class inherits from `Employee` (name, id) and `Salary` (salary).

**Algorithm:**  
1. Create `Employee` class with protected members `name` and `id`.  
2. Create `Salary` class with protected member `salary`.  
3. Derive `Manager` from both `Employee` and `Salary`.  
4. Create a public display function in `Manager` to show all data.

---

### 4 Multilevel Inheritance Example

**Summary:**  
`Gadget → Smartphone → GamingSmartphone` hierarchy. Child class adds extra specs (battery, RAM, storage).

**Algorithm:**  
1. Create `Gadget` class with protected member `brand`.  
2. Derive `Smartphone` class with protected `model`.  
3. Derive `GamingSmartphone` class with private specs.  
4. Set brand, model, and specs using setter functions.  
5. Display complete info in main().

---

### 5 Hierarchical Inheritance Example

**Summary:**  
`Vehicle` as parent, `Car, Bike, Truck, Bus` as multiple children, each with unique properties.

**Algorithm:**  
1. Create parent class `Vehicle` with protected `brand`.  
2. Create child classes `Car, Bike, Truck, Bus` with unique members.  
3. Derive all children from `Vehicle`.  
4. Use setter functions to assign values to parent and child members.  
5. Display info of all vehicles in main().

---

## Conclusion

Access specifiers and inheritance are **fundamental concepts of Object-Oriented Programming (OOP) in C++**.  

- **Access Specifiers** (public, private, protected) control **data encapsulation and visibility**, improving security and code organization.  
- **Inheritance** allows **code reusability**, where child classes can access and extend properties of parent classes.  
- **Single, multiple, multilevel, and hierarchical inheritance** provide flexible ways to model **real-world relationships** in programming.  
- Using these concepts together leads to **cleaner, maintainable, and modular code**, which is easier to debug and extend.  

In short, understanding and applying access specifiers with different inheritance types enables the creation of **efficient and professional C++ programs**, laying a strong foundation for advanced OOP concepts like polymorphism and abstraction.
