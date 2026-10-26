/* Firmware entry: 0x4800cda2 */

int FUN_ram_4800cda2(undefined4 param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4800c81c();
  if (iVar2 == 0) {
    param_3 = -1;
  }
  else {
    FUN_ram_4ff216dc(&DAT_ram_4ff48378);
    if (param_3 != 0) {
      pcVar3 = param_2 + param_3;
      do {
        while (((cVar1 = *param_2, cVar1 != '\n' || (DAT_ram_4ff48380 == 2)) ||
               ((*(code *)PTR_FUN_ram_4800cc78_ram_4ff48388)(param_1,0xd), DAT_ram_4ff48380 != 1)))
        {
          param_2 = param_2 + 1;
          (*(code *)PTR_FUN_ram_4800cc78_ram_4ff48388)(param_1,cVar1);
          if (pcVar3 == param_2) goto LAB_ram_4800ce2a;
        }
        param_2 = param_2 + 1;
      } while (pcVar3 != param_2);
    }
LAB_ram_4800ce2a:
    FUN_ram_4ff216e6(&DAT_ram_4ff48378);
  }
  return param_3;
}


