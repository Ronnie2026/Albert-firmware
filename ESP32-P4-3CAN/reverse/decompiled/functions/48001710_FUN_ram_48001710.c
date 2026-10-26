/* Firmware entry: 0x48001710 */

void FUN_ram_48001710(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar2 = mhartid;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  ppuVar3 = &PTR_FUN_ram_480001fe_ram_4823c240;
  uVar1 = mhartid & 0x1f;
  while (((*(ushort *)((int)ppuVar3 + 6) != param_1 ||
          (((uint)*(ushort *)(ppuVar3 + 1) & 1 << uVar1) == 0)) ||
         (iVar4 = (*(code *)*ppuVar3)(), iVar4 == 0))) {
    ppuVar3 = ppuVar3 + 2;
    if (&UNK_ram_4823c317 < ppuVar3) {
      (&DAT_ram_4ff6d960)[uVar2] = 1;
      return;
    }
  }
  if (DAT_ram_4ff47dac != 0) {
    uVar5 = FUN_ram_4ff44d14();
    ets_printf("E (%lu) %s: init function %p has failed (0x%x), aborting\n",uVar5,"cpu_start",
               *ppuVar3,iVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06();
}


