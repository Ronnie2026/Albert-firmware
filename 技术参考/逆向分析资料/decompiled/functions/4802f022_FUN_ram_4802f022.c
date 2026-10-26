/* Firmware entry: 0x4802f022 */

void FUN_ram_4802f022(int *param_1,undefined4 param_2)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar1 = *(byte *)((int)param_1 + 0xf) & 0x7f;
  }
  else {
    if (*param_1 == 0) goto LAB_ram_4802f04c;
    uVar1 = param_1[2];
  }
  if (1 < uVar1) {
    FUN_ram_4802af5a(param_1,0x2c);
  }
LAB_ram_4802f04c:
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,param_2);
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  return;
}


