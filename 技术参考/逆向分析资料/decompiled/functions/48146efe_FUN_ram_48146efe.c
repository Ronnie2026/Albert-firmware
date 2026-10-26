/* Firmware entry: 0x48146efe */

int FUN_ram_48146efe(int *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((*param_2 & 0xf0) == 0xe0) && (*param_2 != DAT_ram_4ff6e220)) {
    if (DAT_ram_4ff6e1ac == (int *)0x0) {
      return -6;
    }
    piVar1 = DAT_ram_4ff6e1ac;
    iVar3 = -6;
    do {
      while ((*(byte *)((int)piVar1 + 0xe7) & 0x20) != 0) {
        if (param_1 != (int *)0x0) {
          do {
            if ((*param_1 == 0) || (*param_1 == piVar1[1])) goto LAB_ram_48146f6c;
            piVar1 = (int *)*piVar1;
            if (piVar1 == (int *)0x0) {
              return iVar3;
            }
          } while ((*(byte *)((int)piVar1 + 0xe7) & 0x20) != 0);
          break;
        }
LAB_ram_48146f6c:
        iVar2 = FUN_ram_48146e52(piVar1,param_2);
        if (iVar3 == 0) break;
        piVar1 = (int *)*piVar1;
        iVar3 = iVar2;
        if (piVar1 == (int *)0x0) {
          return iVar2;
        }
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
  }
  else {
    iVar3 = -6;
  }
  return iVar3;
}


