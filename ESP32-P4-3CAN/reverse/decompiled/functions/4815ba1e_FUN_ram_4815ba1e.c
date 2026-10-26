/* Firmware entry: 0x4815ba1e */

int FUN_ram_4815ba1e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  code *pcVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar2 = *(code **)(**(int **)(param_1 + 0x50) + 0x1c);
  iVar1 = (*pcVar2)(*(int **)(param_1 + 0x50),*(undefined4 *)(param_1 + 8),0x1000,param_4,param_5,
                    pcVar2);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return iVar1;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  FUN_ram_4815d812(param_1 + 0x44);
  return 0;
}


