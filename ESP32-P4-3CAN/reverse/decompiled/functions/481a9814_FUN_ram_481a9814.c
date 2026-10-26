/* Firmware entry: 0x481a9814 */

void FUN_ram_481a9814(uint *param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (code *)0x0) {
    param_2 = FUN_ram_481a97de;
  }
  if ((param_1 != (uint *)0x4) && (uVar2 = *param_1, 3 < uVar2)) {
    while( true ) {
      iVar1 = (*param_2)(param_1 + 1,uVar2 & 0xfffffffc,~uVar2 & 1,param_3);
      if (iVar1 == 0) break;
      uVar2 = *param_1;
      param_1 = (uint *)((int)(param_1 + 1) + (uVar2 & 0xfffffffc));
      if (uVar2 < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tlsf_block_functions.h",0xa1,"block_next","!block_is_last(block)");
      }
      if (param_1 == (uint *)0x4) {
        return;
      }
      uVar2 = *param_1;
      if (uVar2 < 4) {
        return;
      }
    }
  }
  return;
}


