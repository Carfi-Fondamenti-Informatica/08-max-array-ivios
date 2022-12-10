float grandeValore (float array[], int n){
    float Valore = 0;
    for (int i=0; i<n; i++){
        if(array[i]>Valore){
            Valore = array[i];
        }
    }
    return Valore;
}
