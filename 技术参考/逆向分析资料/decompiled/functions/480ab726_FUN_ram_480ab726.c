/* Firmware entry: 0x480ab726 */

void FUN_ram_480ab726(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 auStack_20 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar2 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) != 0) goto LAB_ram_480ab746;
  }
  else if ((*param_1 != 0) && (uVar2 = param_1[2], uVar2 != 0)) {
LAB_ram_480ab746:
    pbVar1 = (byte *)FUN_ram_4802b206(param_1,uVar2 - 1);
    if ((*pbVar1 & 0xdf) == 0x5b) goto LAB_ram_480ab76a;
  }
  FUN_ram_4802af5a(param_1,0x2c);
LAB_ram_480ab76a:
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,param_2);
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  FUN_ram_4802a928(auStack_20,param_3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  return;
}


