/* Firmware entry: 0x4809ebc2 */

void FUN_ram_4809ebc2(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  FUN_ram_4ff3ec14(param_1 + 0x10,0xffffffff);
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_ram_4ff3ee10(param_1 + 0x10);
  FUN_ram_4ff3ec14(*(undefined4 *)(param_1 + 8),0xffffffff);
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x804) = 0;
  iVar2 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar2 + 0x810) = 0;
  iVar3 = *(int *)(param_1 + 4);
  *(undefined2 *)(iVar2 + 0x80e) = 0;
  *(undefined1 *)(iVar3 + 0x816) = 0;
  iVar2 = *(int *)(param_1 + 4);
  *(undefined2 *)(iVar3 + 0x812) = 0;
  *(undefined2 *)(iVar3 + 0x814) = 0;
  *(undefined1 *)(iVar2 + 0x817) = 0;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x818) = 0;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x835) = 0;
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar2 + 0x838) = 0;
  *(undefined4 *)(iVar2 + 0x83c) = 0;
  *(undefined2 *)(iVar2 + 0x81a) = 0;
  *(undefined4 *)(iVar2 + 0x81c) = 0;
  *(undefined4 *)(iVar2 + 0x820) = 0;
  *(undefined1 *)(iVar2 + 0x824) = 0;
  *(undefined2 *)(iVar2 + 0x828) = 0;
  *(undefined2 *)(iVar2 + 0x826) = 0;
  *(undefined4 *)(iVar2 + 0x82c) = 0;
  *(undefined4 *)(iVar2 + 0x830) = 0;
  *(undefined1 *)(iVar2 + 0x834) = 0;
  FUN_ram_4ff3ee10(uVar1);
  return;
}


