(1)

  T * p;
  int size; 

(2)

template <class T>
Container::Container(int n){
   p = new T[n];
   this->size = n;
}

(3)

template <class T>
Container::~Container(){
   if(p) delete []p;
}

(4)

template <class T>
 T Container::get(int index){
    return p[index];
 }

(5)

 Container<char> charContainer(26);

(6)

for(int i = 0 ; i < 26 ; i ++)
   charContainer.set(i,(char)('a'+i);
for(int i = 25 ; i >= 0 ; i --)
   cout<<charContainer.get(i)<<' '; 
