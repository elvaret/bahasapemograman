package tugasbhspemograman.pert14.inheritance;
// inheritance adalah hubungan is-a

public class Main{
    public static void main (String[] args){
        Hero hero1 = new Hero("Zeus", 500, 3000);
        HeroStrength hero2 = new HeroStrength("Darkseid", 100, 5000);

        hero1.display();
        hero2.display();

        hero1.attack(hero2);
        hero2.attack(hero1);

        hero1.display();
        hero2.display();
    }
}