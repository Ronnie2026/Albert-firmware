/* Firmware entry: 0x48001d52 */

undefined4 FUN_ram_48001d52(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  uVar2 = DAT_ram_4ff6d9a0;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6d9a0 != 0) {
    piVar6 = &DAT_ram_4ff58a38;
    uVar5 = 0;
    while (param_1 != *piVar6) {
      uVar3 = uVar5 + 1;
      piVar6 = piVar6 + 2;
      if (DAT_ram_4ff6d9a0 == uVar3) goto LAB_ram_48001dec;
      uVar1 = uVar5 & 0xfffffffe;
      uVar5 = uVar3;
      if ((uint)(&DAT_ram_4ff58a3c)[uVar3 * 2] >> 3 <= (uint)(&DAT_ram_4ff58a3c)[uVar1] >> 3) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("log_binary_heap.c",99,"esp_log_cache_get_level",
                         "i == 0 || s_log_cache[(i - 1) / 2].generation < s_log_cache[i].generation"
                        );
      }
    }
    if (DAT_ram_4ff6d9a0 != uVar5) {
      *param_2 = (&DAT_ram_4ff58a3c)[uVar5 * 2] & 7;
      if (uVar2 == 0x1f) {
        iVar7 = DAT_ram_4ff6d9a4 + 1;
        (&DAT_ram_4ff58a3c)[uVar5 * 2] = (&DAT_ram_4ff58a3c)[uVar5 * 2] & 7 | DAT_ram_4ff6d9a4 << 3;
        DAT_ram_4ff6d9a4 = iVar7;
        FUN_ram_48001c3c(uVar5);
        if (iVar7 == 0x1fffffff) {
          iVar7 = 0;
          do {
            iVar4 = iVar7 + 1;
            (&DAT_ram_4ff58a3c)[iVar7 * 2] = (&DAT_ram_4ff58a3c)[iVar7 * 2] & 7 | iVar7 * 8;
            iVar7 = iVar4;
          } while (iVar4 != 0x1f);
          DAT_ram_4ff6d9a4 = 0x1f;
        }
      }
      return 1;
    }
  }
LAB_ram_48001dec:
  DAT_ram_4ff6d99c = DAT_ram_4ff6d99c + 1;
  return 0;
}


