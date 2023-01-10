// function Mail() {
//     this.from = 'pengirim@dicoding.com';
// };

// Mail.prototype.sendMessage = function(msg, to) {
//   console.log(`you send: ${msg} to ${to} from ${this.from}`);
// };
// const mail1 = new Mail();
// mail1.sendMessage('hallo', 'penerima@dicoding.com');
// const mail2 = new Mail();
// mail2.sendMessage('hallo', 'google.com');

// class Mail {
//     constructor() {
//         this.from = 'pengirim@dicoding.com';
//     }

//     sendMessage(msg, to) {
//         console.log(`you send: ${msg} to ${to} from ${this.from}`);
//     };
// }

// const mail1 = new Mail();
// mail1.sendMessage('hallo', 'penerima@dicoding.com');
// const mail2 = new Mail();
// mail2.sendMessage('hallo', 'google.com');

// cara 1
// class Mail {
//     constructor(sender) {
//         this.from = sender;
//         this.contacts = [];
//         this.yourOtherProperty = 'the values';
//     }
//     sendMessage(msg, to,) {
//         console.log(`you send: ${msg} to ${to} from ${this.from}`);
//         this.contacts.push(to); // menyimpan kontak baru
//     };
// }
// const mail1 = new Mail("google.com");
//  mail1.sendMessage('hallo', 'penerima@dicoding.com');

// // cara 2
// function Mail() {
//     this.from = 'pengirim@dicoding.com';
//     this.contacts = [];
//     this.yourOtherPrototype = 'the values';
// };

// Mail.prototype.sendMessage = function (msg, to) {
//     console.log(`you send: ${msg} to  ${to} from ${this.from}`);
//     this.contacts.push(to); // menyimpan kontak baru
// };

// /**
// cara 1, menggunakan var (hanya dapat digunakan pada penulisan kelas menggunakan statement `function`)
// **/
// var contacts = [];
// // contoh
// function Mail() {
//     this.from = 'pengirim@dicoding.com';
//     var contacts = [];
// }

// /**
// cara 2, cara ini dapat digunakan pada penulisan kelas menggunakan statement `function` dan `class`
// **/
// this._contacts = []
// // contoh
// class Mail {
//     constructor() {
//         this._contacts = [];
//         this.from = 'pengirim@dicoding.com';
//     }
// }

// /**
// cara 3, menambahkan prefix # , cara ini dapat digunakan pada penulisan kelas menggunakan statement `class` saja
//   **/
// #contacts = [];
// // contoh
// class Mail {
//     #contacts = [];
//     constructor() {
//         this.from = 'pengirim@dicoding.com';
//     }
// }

// class Mail {
//     constructor(author) {
//         this.from = author;
//         this._contacts = [];
//     }
//     sendMessage(msg, to) {
//         console.log(`you send: ${msg} to ${to} from ${this.from}`);
//         this._contacts.push(to);
//     }
//     showAllContacts() {
//         return this._contacts;
//     }
// }

// class WhatsApp extends Mail {
//     constructor(phoneNumber,username,isBussines) {
//         super(phoneNumber);
//         this.username = username;
//         this.isBussinessAccount = isBussines;
//     }
//     myProfile() {
//         return `my name ${this.username}, is ${this.isBussinessAccount ? 'Business' : 'Personal'} author number ${this.from}`;
//     }
// }

// const wa1 = new WhatsApp('080111000222','dicoding',true);
// console.log(wa1.myProfile());

// //[1] list of abstractions
// const canSendMessage = self => ({
//     sendMessage: () => console.log('send message:', self.message)
//   });

// const checkIsValidPhone = self => ({
//     isValid: () => console.log('valid phone', self.from)
//   });
// const checkPeople= self => ({
//     isPeople: () => console.log('is people', self.people)
// })
// // [2] crate object composition
// const personalEnterprise = (from, message, store,people) => {
//   // [3] attributes
//   const self = {
//     from,
//     message,
//     store,
//     people
//   };
//   // [4] method
//   const personalEnterpriseBehaviors = self => ({
//     createCatalog: () => console.log('Catalog has created: ', self.store)
//   });

//   // [5] create object composition
//   return Object.assign(self, personalEnterpriseBehaviors(self), canSendMessage(self), checkIsValidPhone(self),checkPeople(self));
// };

// const pe1 = personalEnterprise('pengirim@gmail.com', 'hei produk baru nih', 'Dicoding Store',true);
// pe1.createCatalog(); //Catalog has created:  Dicoding Store
// pe1.sendMessage(); //send message: hei produk baru nih
// pe1.isValid(); //valid phone
// pe1.isPeople(); //is people

// const myAge = birthday => {
//     const birtday = new Date(birthday);
//     const today = Date.now(); // today menghasilkan nilai miliseconds saat ini

//     const diff_ms = today - birtday.getTime(); // menghitung selisih nilai miliseconds hari ini dan tanggal lahir
//     const diffDate = new Date(diff_ms);

//     return diffDate.getFullYear() - 1970; // 1970 adalah representasi 0 dari miliseconds
//   };

//   console.log(myAge('200-01-22')); // 21 tahun

//proyek garapan dicoding

// class animal {
//   constructor(name, age, isMamal) {
//     this.name = name;
//     this.age = age;
//     this.isMamal = isMamal;
//   }
//   showAnimals() {
//     return `nama hewan ${this.name}, umur ${this.age}, mamalia ${this.isMamal}`;
//   }
// }
// class rabbit extends animal {
//   constructor(name,age,isMamal) {
//     super(name,age,isMamal);
//     this.rabbitName=name;
//     this.isMamal=isMamal;
//   }
//   eat() {
//     return `nama kelinci ${this.rabbitName} sedang makan, mamalia ${this.isMamal}`;
//   }
// }
// class eagle{
//   constructor(name,age,isMamal) {
//     this.name=name;
//     this.age=age;
//     this.isMamal=isMamal;
//   }
//   fly() {
//     return `nama burung elang ${this.name} sedang terbang, mamalia ${this.isMamal}`;
//   }
// }


// const myRabbit = new rabbit('Labi',2,true);
// console.log(myRabbit.eat());
// const myEagle = new eagle('Elo',4,false);
// console.log(myEagle.fly());

// class Animal {
//   constructor(name, age, isMamal) {
//     this.name = name;
//     this.age = age;
//     this.isMamal = isMamal;
//   }
 
// }
// class Rabbit extends Animal {
//     isMamal=true;
  
//   eat=()=> `nama kelinci ${this.name} sedang makan`;
  
// }
// class Eagle extends Animal{
//   isMamal=false;
  
//   fly=()=> `nama burung elang ${this.name} sedang terbang`;
  
// }


// const myRabbit = new Rabbit('Labi',2);
// console.log(myRabbit.eat());
// const myEagle = new Eagle('Elo',4);
// console.log(myEagle.fly());

// const books = [
//   { title: 'The Da Vinci Code', author: 'Dan Brown', sales: 5094805 },
//   { title: 'The Ghost', author: 'Robert Harris', sales: 807311 },
//   { title: 'White Teeth', author: 'Zadie Smith', sales: 815586 },
//   { title: 'Fifty Shades of Grey', author: 'E. L. James', sales: 3758936 },
//   { title: 'Jamie\'s Italy', author: 'Jamie Oliver', sales: 906968 },
//   { title: 'I Can Make You Thin', author: 'Paul McKenna', sales: 905086 },
//   { title: 'Harry Potter and the Deathly Hallows', author: 'J.K Rowling', sales: 4475152 },
// ];

// // TODO
//   // const greatAuthors=books.filter((book)=>book.sales>1000000 ).map ((book)=>{
//   // return `${book.author}adalah penulis buku ${book.title}yang sangat hebat!`});
//   // console.log(greatAuthors);
//   const greatAuthors = books.filter((book) => book.sales > 1000000).map((book) => {

//     return `${book.author} adalah penulis buku ${book.title} yang sangat hebat!`;
  
//   });
  
  
  
//   console.log(greatAuthors);





