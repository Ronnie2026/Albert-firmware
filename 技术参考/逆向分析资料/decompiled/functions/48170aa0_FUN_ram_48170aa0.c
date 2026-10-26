/* Firmware entry: 0x48170aa0 */

undefined4 FUN_ram_48170aa0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x14) == 0) {
    if (*(uint *)(param_1 + 0x80) < 4) {
      return 0xffff8e00;
    }
    iVar1 = *(int *)(param_1 + 0x74);
    *(uint *)(param_1 + 0x88) =
         ((uint)*(byte *)(iVar1 + 1) << 0x10 | (uint)*(byte *)(iVar1 + 2) << 8 |
         (uint)*(byte *)(iVar1 + 3)) + 4;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  iVar2 = iVar1 + *(int *)(param_1 + 0x14) + 0xd;
  if (iVar2 + *(uint *)(param_1 + 0x80) <= iVar1 + 0x414dU) {
    iVar2 = FUN_ram_4ff4522c(iVar2,*(undefined4 *)(param_1 + 0x74));
    uVar3 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x14) = uVar3;
    if (uVar3 < *(uint *)(param_1 + 0x88)) {
      iVar2 = iVar2 + *(int *)(param_1 + 0x80);
      *(int *)(param_1 + 0x68) = iVar2;
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x60);
      *(int *)(param_1 + 0x6c) = iVar2 + 3;
      *(int *)(param_1 + 0x70) = iVar2 + 5;
      *(int *)(param_1 + 0x74) = iVar2 + 5;
      return 0xffff9a80;
    }
    *(int *)(param_1 + 0x70) = iVar1 + 0xd;
    *(int *)(param_1 + 0x74) = iVar1 + 0xd;
    *(uint *)(param_1 + 0x80) = uVar3;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(int *)(param_1 + 0x68) = iVar1 + 8;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x60);
    *(int *)(param_1 + 0x6c) = iVar1 + 0xb;
    if (uVar3 < 0x10000) {
      *(char *)(iVar1 + 0xb) = (char)(uVar3 >> 8);
      *(char *)(iVar1 + 0xc) = (char)(uVar3 * 0x100 >> 8);
      return 0;
    }
  }
  return 0xffffff92;
}


