/* Firmware entry: 0x480881e0 */

void FUN_ram_480881e0(int *param_1,undefined4 param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar2 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) != 0) goto LAB_ram_480881fc;
  }
  else if ((*param_1 != 0) && (uVar2 = param_1[2], uVar2 != 0)) {
LAB_ram_480881fc:
    pbVar1 = (byte *)FUN_ram_4802b206(param_1,uVar2 - 1);
    if ((*pbVar1 & 0xdf) == 0x5b) goto LAB_ram_4808821e;
  }
  FUN_ram_4802af5a(param_1,0x2c);
LAB_ram_4808821e:
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,param_2);
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  return;
}


