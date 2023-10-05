class Solution {
    public int bestClosingTime(String customers) {
        int i, min, counter = 0, fee = 0;

        LinkedList<Integer> Ns = new LinkedList<>();
        ArrayList<Integer> hours = new ArrayList<>();

        for(i = 0; i < customers.length(); i++){
            if(customers.charAt(i) == 'N') Ns.add(i);
        }

        hours.add(customers.length());
        min = Ns.size();
        fee = min;

        for(i = customers.length() - 1; i > - 1; i--){
            if(customers.charAt(i) != 'N'){
                counter++;
            }
            else {
                counter--;
            }

            if(min > fee + counter){
                min = fee + counter;
                hours.add(i);
            }
            else if (min == fee + counter){
                hours.add(i);
            }
        }
        Collections.sort(hours);
        return hours.get(0);
    }
}