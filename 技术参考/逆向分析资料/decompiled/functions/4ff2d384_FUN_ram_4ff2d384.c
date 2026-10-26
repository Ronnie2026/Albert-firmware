/* Firmware entry: 0x4ff2d384 */

void FUN_ram_4ff2d384(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *(byte *)((int)param_1 + 0xf) & 1;
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f68 + uVar1 * 8,0xffffffff);
  iVar5 = param_1[6];
  puVar4 = *(undefined4 **)(&DAT_ram_4ff6e16c + uVar1 * 4);
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0x1c) = param_1[7];
  }
  *(int *)param_1[7] = iVar5;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1[3] & 0xff000000;
  if (param_1 == puVar4) {
    puVar4 = *(undefined4 **)(&DAT_ram_4ff6e16c + uVar1 * 4);
    uVar2 = 0xffffffff;
    uVar3 = 0xffffffff;
    if (puVar4 != (undefined4 *)0x0) {
      uVar2 = *puVar4;
      uVar3 = puVar4[1];
    }
    FUN_ram_4ff21a32(uVar2,uVar3,uVar1);
  }
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f68 + uVar1 * 8);
  return;
}


