/* Firmware entry: 0x4800be02 */

undefined4 FUN_ram_4800be02(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 6) {
    piVar6 = (int *)(&DAT_ram_4ff5a014 + param_1 * 4);
    if (*piVar6 == 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(3,&DAT_ram_481b4c88,"I (%lu) %s: ALREADY NULL\n",uVar2,&DAT_ram_481b4c88);
    }
    else {
      FUN_ram_48008120(param_1,1,1,1);
      iVar5 = param_1 * 0x38;
      FUN_ram_48003514(*(undefined4 *)(*piVar6 + 8));
      iVar1 = iVar5 + 0x4ff48230;
      FUN_ram_4ff3ec14(iVar1,0xffffffff);
      iVar3 = *(int *)(&DAT_ram_4ff48228 + iVar5);
      uVar4 = *(uint *)(iVar3 + 0xc);
      *(uint *)(*piVar6 + 0x24) = *(uint *)(*piVar6 + 0x24) & 0xfffffefe;
      *(uint *)(iVar3 + 0xc) = uVar4 & 0xfffffefe;
      FUN_ram_4ff3ee10(iVar1);
      FUN_ram_4ff3ec14(iVar1,0xffffffff);
      iVar3 = *(int *)(&DAT_ram_4ff48228 + iVar5);
      uVar4 = *(uint *)(iVar3 + 0xc);
      *(uint *)(*piVar6 + 0x24) = *(uint *)(*piVar6 + 0x24) & 0xfffffffd;
      *(uint *)(iVar3 + 0xc) = uVar4 & 0xfffffffd;
      FUN_ram_4ff3ee10(iVar1);
      FUN_ram_4ff3ec14(iVar1,0xffffffff);
      iVar3 = *piVar6;
      iVar5 = *(int *)(iVar3 + 0x34);
      if (iVar5 != 0) {
        *(undefined4 *)(iVar3 + 0x34) = 0;
        *(undefined4 *)(iVar3 + 0x28) = 0;
        *(undefined4 *)(iVar3 + 0x2c) = 0;
      }
      FUN_ram_4ff3ee10(iVar1);
      thunk_FUN_ram_4ff209c6(iVar5);
      FUN_ram_48008076(*(undefined4 *)(&DAT_ram_4ff5a014 + param_1 * 4));
      *(undefined4 *)(&DAT_ram_4ff5a014 + param_1 * 4) = 0;
      if (param_1 != 0) {
        FUN_ram_4ff2ff60(*(undefined4 *)(&DAT_ram_4ff4822c + param_1 * 0x38),0);
        if (*(int *)(&DAT_ram_4ff4822c + param_1 * 0x38) == 0x11) {
          FUN_ram_48132ec4();
        }
        *(undefined4 *)(&DAT_ram_4ff4822c + param_1 * 0x38) = 0xffffffff;
      }
      FUN_ram_48009210(param_1);
    }
    return 0;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar2,
                   &DAT_ram_481b4c88,"uart_driver_delete",0x807);
  return 0xffffffff;
}


