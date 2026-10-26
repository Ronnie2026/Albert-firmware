/* Firmware entry: 0x4815f2c8 */

void FUN_ram_4815f2c8(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdmmc_common.c",0x122,"sdmmc_flip_byte_order",
                     "size % (2 * sizeof(uint32_t)) == 0");
  }
  if (param_2 >> 3 != 0) {
    puVar3 = (undefined4 *)((int)param_1 + (param_2 & 0xfffffffc));
    puVar1 = param_1;
    do {
      puVar2 = puVar1 + 1;
      puVar3 = puVar3 + -1;
      uVar4 = __bswapsi2(*puVar1);
      uVar5 = __bswapsi2(*puVar3);
      *puVar1 = uVar5;
      *puVar3 = uVar4;
      puVar1 = puVar2;
    } while (puVar2 != param_1 + (param_2 >> 3));
  }
  return;
}


