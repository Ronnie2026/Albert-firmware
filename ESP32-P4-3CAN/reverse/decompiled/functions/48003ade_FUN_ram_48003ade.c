/* Firmware entry: 0x48003ade */

void FUN_ram_48003ade(uint param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff216dc(&DAT_ram_4ff4bdfc);
  if ((param_1 & 1) == 0) {
    iVar3 = param_3 * 2;
    uVar5 = (&DAT_ram_4ff4bd3c)[param_3 * 6];
  }
  else {
    iVar3 = param_3 << 1;
    uVar5 = param_2;
  }
  uVar4 = param_2;
  if ((param_1 & 2) == 0) {
    uVar4 = (&DAT_ram_4ff4bd40)[(iVar3 + param_3) * 2];
  }
  uVar1 = param_2;
  if ((param_1 & 4) == 0) {
    uVar1 = (&DAT_ram_4ff4bd44)[(iVar3 + param_3) * 2];
  }
  uVar2 = param_2;
  if ((param_1 & 8) == 0) {
    uVar2 = (&DAT_ram_4ff4bd48)[(iVar3 + param_3) * 2];
  }
  if (((&DAT_ram_4ff4bd4c)[(iVar3 + param_3) * 2] & 0xf) == 0) {
    (&DAT_ram_4ff4bd50)[(iVar3 + param_3) * 2] = param_2;
  }
  iVar3 = iVar3 + param_3;
  (&DAT_ram_4ff4bd44)[iVar3 * 2] = uVar1;
  (&DAT_ram_4ff4bd3c)[iVar3 * 2] = uVar5;
  (&DAT_ram_4ff4bd40)[iVar3 * 2] = uVar4;
  (&DAT_ram_4ff4bd48)[iVar3 * 2] = uVar2;
  (&DAT_ram_4ff4bd4c)[iVar3 * 2] =
       (param_1 & 0xf) << 4 | (&DAT_ram_4ff4bd4c)[iVar3 * 2] & 0xffffff00 |
       (param_1 | (&DAT_ram_4ff4bd4c)[iVar3 * 2] & 0xffffff0f) & 0xf;
  FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
  return;
}


