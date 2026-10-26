/* Firmware entry: 0x480416da */

undefined4 FUN_ram_480416da(short *param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 == *param_2) {
    if ((((((param_1[1] != param_2[1]) || ((char)param_1[2] != (char)param_2[2])) ||
          (param_1[3] != param_2[3])) ||
         (((param_1[4] != param_2[4] || (param_1[5] != param_2[5])) ||
          ((param_1[6] != param_2[6] ||
           (((char)param_1[7] != (char)param_2[7] ||
            (*(char *)((int)param_1 + 0xf) != *(char *)((int)param_2 + 0xf))))))))) ||
        (param_1[8] != param_2[8])) ||
       (((param_1[9] != param_2[9] || (param_1[10] != param_2[10])) ||
        (param_1[0xb] != param_2[0xb])))) {
      return 0;
    }
    param_2 = param_2 + 0xc;
    psVar3 = param_1 + 0xc;
    while ((((char)*psVar3 == (char)*param_2 &&
            (*(char *)((int)psVar3 + 1) == *(char *)((int)param_2 + 1))) &&
           (((char)psVar3[1] == (char)param_2[1] &&
            (*(char *)((int)psVar3 + 3) == *(char *)((int)param_2 + 3)))))) {
      psVar1 = psVar3 + 2;
      psVar2 = param_2 + 2;
      psVar3 = (short *)((int)psVar3 + 5);
      param_2 = (short *)((int)param_2 + 5);
      if ((char)*psVar1 != (char)*psVar2) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      if (psVar3 == param_1 + 0x1b) {
        return 1;
      }
    }
  }
  return 0;
}


