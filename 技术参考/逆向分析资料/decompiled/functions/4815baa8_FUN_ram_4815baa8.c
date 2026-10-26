/* Firmware entry: 0x4815baa8 */

int FUN_ram_4815baa8(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 auStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0xc) != -2) {
    return 0x110b;
  }
  auStack_14[0] = 0xfffffffc;
  pcVar2 = *(code **)(**(int **)(param_1 + 0x50) + 0x14);
  iVar1 = (*pcVar2)(*(int **)(param_1 + 0x50),*(undefined4 *)(param_1 + 8),auStack_14,4,0xfffffffc,
                    pcVar2);
  *(uint *)(param_1 + 0xc) = -(uint)(iVar1 == 0) & 0xfffffffc;
  return iVar1;
}


