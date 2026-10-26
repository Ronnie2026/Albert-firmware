/* Firmware entry: 0x48030cb4 */

undefined4
FUN_ram_48030cb4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 *param_6)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 auStack_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    pcVar1 = "nvs";
  }
  else {
    pcVar1 = "p4_data";
  }
  DAT_ram_4ff6dd64 = FUN_ram_48159fd2(pcVar1,param_2,0,auStack_24);
  if (DAT_ram_4ff6dd64 == 0x1102) {
LAB_ram_48030d42:
    *param_6 = 0;
    DAT_ram_4ff6dd64 = 0;
    uVar2 = 0;
  }
  else {
    if (DAT_ram_4ff6dd64 == 0) {
      *param_6 = param_5;
      DAT_ram_4ff6dd64 = FUN_ram_4815a556(auStack_24[0],param_3,param_4,param_6);
      FUN_ram_4815a050(auStack_24[0]);
      if (DAT_ram_4ff6dd64 == 0x1102) goto LAB_ram_48030d42;
      if (DAT_ram_4ff6dd64 == 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 1;
      }
    }
    uVar2 = 2;
  }
  return uVar2;
}


