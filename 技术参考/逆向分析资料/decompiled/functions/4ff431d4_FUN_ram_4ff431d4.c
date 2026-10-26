/* Firmware entry: 0x4ff431d4 */

void FUN_ram_4ff431d4(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = param_2 + 8;
  uVar2 = FUN_ram_4ff43982(*(undefined4 *)(param_1 + 0x10));
  if ((uVar2 <= uVar1) && (uVar1 < uVar2 + *(int *)(param_1 + 0xc))) {
    return;
  }
  ets_printf(s_CORRUPT_HEAP__multi_heap_c__d_de_ram_4ff54990,0x7b,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06();
}


