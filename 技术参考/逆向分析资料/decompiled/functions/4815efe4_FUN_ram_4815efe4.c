/* Firmware entry: 0x4815efe4 */

int FUN_ram_4815efe4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = *(uint *)(param_1 + 0xc4);
  if ((uVar2 & 5) == 1) {
    iVar1 = FUN_ram_48161eae();
  }
  else if ((uVar2 & 2) == 0) {
    if ((uVar2 & 4) == 0) goto LAB_ram_4815f004;
    iVar1 = FUN_ram_48160c2a();
  }
  else {
    iVar1 = FUN_ram_48160148();
  }
  if (iVar1 != 0x106) {
    return iVar1;
  }
LAB_ram_4815f004:
  *(undefined4 *)(param_1 + 0xbc) = 20000;
  return 0;
}


