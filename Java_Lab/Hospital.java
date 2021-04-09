
class Doctor {
    void DoctorDetails() {
        System.out.println("Doctor Details...");
    }
}

class Surgeon extends Doctor {
    void SurgeonDetails() {
        System.out.println("Surgen Detail...");
    }
}

public class Hospital {
    public static void main(String args[]) {
        Surgeon s = new Surgeon();
        s.DoctorDetails();
        s.SurgeonDetails();
    }
}