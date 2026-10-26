/* Firmware entry: 0x4800b2a2 */

undefined4 FUN_ram_4800b2a2(uint param_1,uint *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 6) {
    if (param_2 != (uint *)0x0) {
      iVar1 = param_1 * 0x38;
      *(undefined4 *)(*(int *)(&DAT_ram_4ff48228 + iVar1) + 0x10) = 0x7ffff;
      FUN_ram_4ff3ec14(iVar1 + 0x4ff48230,0xffffffff);
      puVar2 = &DAT_ram_4ff48228 + iVar1;
      if ((*param_2 & 0x100) == 0) {
        FUN_ram_48131dae(puVar2,0);
        uVar4 = *param_2;
      }
      else {
        FUN_ram_48131dae(puVar2,(char)param_2[1]);
        uVar4 = *param_2;
      }
      if ((uVar4 & 1) != 0) {
        FUN_ram_48131ba8(puVar2,*(undefined1 *)((int)param_2 + 6));
        uVar4 = *param_2;
      }
      if ((uVar4 & 2) != 0) {
        FUN_ram_48131bda(puVar2,*(undefined1 *)((int)param_2 + 5));
        uVar4 = *param_2;
      }
      *(uint *)(*(int *)(&DAT_ram_4ff48228 + param_1 * 0x38) + 0xc) =
           uVar4 | *(uint *)(*(int *)(&DAT_ram_4ff48228 + param_1 * 0x38) + 0xc);
      FUN_ram_4ff3ee10(iVar1 + 0x4ff48230);
      return 0;
    }
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): param null\n",uVar3,&DAT_ram_481b4c88,
                     "uart_intr_config",0x445);
  }
  else {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar3,
                     &DAT_ram_481b4c88,"uart_intr_config",0x444);
  }
  return 0xffffffff;
}


