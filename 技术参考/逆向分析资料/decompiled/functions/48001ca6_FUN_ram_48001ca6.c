/* Firmware entry: 0x48001ca6 */

void FUN_ram_48001ca6(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar2 = DAT_ram_4ff6d9a0;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6d9a0 != 0) {
    puVar6 = &DAT_ram_4ff58a38;
    uVar3 = 0;
    while (iVar4 = FUN_ram_4ff453ae(*puVar6,param_1), iVar4 != 0) {
      uVar5 = uVar3 + 1;
      puVar6 = puVar6 + 2;
      if (uVar2 == uVar5) {
        return;
      }
      uVar1 = uVar3 & 0xfffffffe;
      uVar3 = uVar5;
      if ((uint)(&DAT_ram_4ff58a3c)[uVar5 * 2] >> 3 <= (uint)(&DAT_ram_4ff58a3c)[uVar1] >> 3) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("log_binary_heap.c",0x54,"esp_log_cache_set_level",
                         "i == 0 || s_log_cache[(i - 1) / 2].generation < s_log_cache[i].generation"
                        );
      }
    }
    (&DAT_ram_4ff58a3c)[uVar3 * 2] = (&DAT_ram_4ff58a3c)[uVar3 * 2] & 0xfffffff8 | param_2 & 7;
  }
  return;
}


