/* Firmware entry: 0x4802ed9c */

char FUN_ram_4802ed9c(undefined1 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  byte bStack_26;
  char cStack_25;
  undefined4 auStack_24 [3];
  
  cVar1 = DAT_ram_4ff6dd68;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = 0;
  *param_2 = '\0';
  if (cVar1 != '\0') {
    iVar2 = FUN_ram_48159fd2("p4_data","p4_onboard",0,auStack_24);
    if (iVar2 == 0x1102) {
      return cVar1;
    }
    if (iVar2 == 0) {
      bStack_26 = 0;
      iVar2 = FUN_ram_4815a2d0(auStack_24[0],"completed",&bStack_26);
      if (iVar2 == 0x1102) {
LAB_ram_4802eea4:
        FUN_ram_4815a050();
        return cVar1;
      }
      if ((iVar2 == 0) && (bStack_26 < 2)) {
        if (bStack_26 == 0) goto LAB_ram_4802eea4;
        cStack_25 = '\0';
        iVar2 = FUN_ram_4815a2d0(auStack_24[0],"choice",&cStack_25);
        FUN_ram_4815a050(auStack_24[0]);
        if ((iVar2 == 0) && ((byte)(cStack_25 - 1U) < 3)) {
          *param_1 = 1;
          *param_2 = cStack_25;
          return cVar1;
        }
      }
      else {
        FUN_ram_4815a050(auStack_24[0]);
      }
    }
  }
  return '\0';
}


