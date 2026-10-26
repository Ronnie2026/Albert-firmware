/* Firmware entry: 0x48146dd2 */

int FUN_ram_48146dd2(int *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((*param_2 & 0xf0) != 0xe0) || (*param_2 == DAT_ram_4ff6e220)) {
    return -6;
  }
  if (DAT_ram_4ff6e1ac == (int *)0x0) {
    iVar2 = -6;
  }
  else {
    iVar2 = -6;
    piVar1 = DAT_ram_4ff6e1ac;
    do {
      while ((*(byte *)((int)piVar1 + 0xe7) & 0x20) != 0) {
        if (param_1 != (int *)0x0) {
          do {
            if ((*param_1 == 0) || (*param_1 == piVar1[1])) goto LAB_ram_48146e3a;
            piVar1 = (int *)*piVar1;
            if (piVar1 == (int *)0x0) {
              return iVar2;
            }
          } while ((*(byte *)((int)piVar1 + 0xe7) & 0x20) != 0);
          break;
        }
LAB_ram_48146e3a:
        iVar2 = FUN_ram_48146cf6(piVar1,param_2);
        if (iVar2 != 0) {
          return iVar2;
        }
        piVar1 = (int *)*piVar1;
        iVar2 = 0;
        if (piVar1 == (int *)0x0) {
          return 0;
        }
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return iVar2;
}


