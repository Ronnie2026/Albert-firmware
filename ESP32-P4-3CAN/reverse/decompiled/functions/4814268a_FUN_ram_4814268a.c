/* Firmware entry: 0x4814268a */

void FUN_ram_4814268a(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e204 != (int *)0x0) {
    piVar2 = (int *)0x0;
    piVar4 = DAT_ram_4ff6e204;
    do {
      if ((piVar4[2] == param_1) && (piVar4[3] == param_2)) {
        iVar1 = *piVar4;
        if (piVar2 != (int *)0x0) {
          *piVar2 = *piVar4;
          iVar1 = (int)DAT_ram_4ff6e204;
        }
        DAT_ram_4ff6e204 = (int *)iVar1;
        FUN_ram_48139604(0xc,piVar4);
        return;
      }
      piVar3 = (int *)*piVar4;
      piVar2 = piVar4;
      piVar4 = piVar3;
    } while (piVar3 != (int *)0x0);
  }
  return;
}


