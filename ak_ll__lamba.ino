int veri;                           //Bluetooth üzerinden okuduğumuz değişken.
int kirmiziPin = 3;                 //RGB Ledin kırmızı bacağının takılacağı pin
int yesilPin = 6;                  //RGB Ledin yeşil bacağının takılacağı pin       
int maviPin = 5;                   //RGB Ledin mavi bacağının takılacağı pi
int beyazpin = 10;
void setup() {
  Serial.begin(9600);               //Seri haberleşmeyi başlatıyoruz.
   pinMode(beyazpin,OUTPUT);  
  pinMode(kirmiziPin,OUTPUT);       //Kırmızı pinini OUTPUT olarak ayarlıyoruz.
  pinMode(yesilPin,OUTPUT);         //Yeşl pinini OUTPUT olarak ayarlıyoruz.
  pinMode(maviPin,OUTPUT);          //Mavi pinini OUTPUT olarak ayarlıyoruz.
}
void loop() {
  if(Serial.available()>0){         //Seri haberleşmeden veri gelmesini bekliyoruz.
    veri = Serial.read();           //Seri haberleşmeden gelen veriyi okuyoruz.
  }
  else if(veri == 'c'){             //Seri haberleşmeden y harfi geldiğinde bu kısım çalışır.

 
{
int rDeger=random(0,255);
int gDeger=random(0,255);
int bDeger=random(0,255);
analogWrite(kirmiziPin,rDeger);
analogWrite(yesilPin,gDeger);
analogWrite(maviPin,bDeger);
delay(1000);
}
  }
  if(veri == 'k'){                  //Seri haberleşmeden k harfi geldiğinde bu kısım çalışır.
    digitalWrite(kirmiziPin,HIGH);   
    digitalWrite(yesilPin,LOW);
    digitalWrite(maviPin,LOW);
  }
  else if(veri == 'y'){             //Seri haberleşmeden y harfi geldiğinde bu kısım çalışır.
    digitalWrite(kirmiziPin,LOW);
    digitalWrite(yesilPin,HIGH);
    digitalWrite(maviPin,LOW);
  }
  else if(veri == 'm'){             //Seri haberleşmeden m harfi geldiğinde bu kısım çalışır.
    digitalWrite(kirmiziPin,LOW);
    digitalWrite(yesilPin,LOW);
    digitalWrite(maviPin,HIGH);
  }
  else if(veri == 'e'){             //Seri haberleşmeden y harfi geldiğinde bu kısım çalışır.
    digitalWrite(kirmiziPin,HIGH);
    digitalWrite(yesilPin,HIGH);
    digitalWrite(maviPin,HIGH);
    digitalWrite(beyazpin,LOW);
  }
  else if(veri == 'b'){             //Seri haberleşmeden m harfi geldiğinde bu kısım çalışır.
    digitalWrite(beyazpin,HIGH);
      digitalWrite(kirmiziPin,LOW);
    digitalWrite(yesilPin,LOW);
    digitalWrite(maviPin,LOW);
  }
  else{                             //Seri haberleşmeden tanımlanmayan veri geldiğinde bu kısım çalışır.
    digitalWrite(kirmiziPin,LOW);
    digitalWrite(yesilPin,LOW);
    digitalWrite(maviPin,LOW);
    digitalWrite(beyazpin,LOW);
  }
}
