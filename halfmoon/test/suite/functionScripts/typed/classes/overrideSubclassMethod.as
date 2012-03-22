package deltablue {

public class Constraint {
    public function Constraint() {
        print(this.isInput());
    }
    
    public function isInput():Boolean {
      return false;
    }

} // class Constraint

public class StayConstraint extends Constraint {
    public function StayConstraint() {
    }
} 

public class EditConstraint extends Constraint {
    public function EditConstraint() {
    }
    
    override public function isInput():Boolean {
      return true;
    }
} 

function chainTest() {
    var stayConstraint:StayConstraint = new StayConstraint();
    var edit:EditConstraint = new EditConstraint();
}

chainTest();
} // package
