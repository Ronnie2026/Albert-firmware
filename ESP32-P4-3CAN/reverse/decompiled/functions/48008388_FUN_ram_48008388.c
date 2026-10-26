/* Firmware entry: 0x48008388 */

char FUN_ram_48008388(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)(&DAT_ram_4ff5a014 + param_1 * 4);
  iVar4 = *piVar1;
  cVar6 = *(char *)(iVar4 + 0x18);
  if ((cVar6 == '\0') ||
     (iVar4 = FUN_ram_4ff364a4(*(undefined4 *)(iVar4 + 0x5c),*(undefined4 *)(iVar4 + 0x1c),
                               *(undefined1 *)(iVar4 + 0x20),0), iVar4 != 1)) {
    cVar6 = '\0';
  }
  else {
    iVar5 = param_1 * 0x38 + 0x4ff48230;
    FUN_ram_4ff3ec14(iVar5,0xffffffff);
    iVar4 = *piVar1;
    *(undefined1 *)(iVar4 + 0x18) = 0;
    *(uint *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + (uint)*(byte *)(iVar4 + 0x20);
    FUN_ram_4ff3ee10(iVar5);
    uVar2 = *(uint *)*piVar1;
    if (uVar2 < 6) {
      iVar5 = uVar2 * 0x38 + 0x4ff48230;
      FUN_ram_4ff3ec14(iVar5,0xffffffff);
      iVar4 = *(int *)(&DAT_ram_4ff48228 + uVar2 * 0x38);
      uVar2 = *(uint *)(*(int *)(&DAT_ram_4ff5a014 + uVar2 * 4) + 0x24) & 0x101;
      *(uint *)(iVar4 + 0x10) = uVar2;
      *(uint *)(iVar4 + 0xc) = uVar2 | *(uint *)(iVar4 + 0xc);
      FUN_ram_4ff3ee10(iVar5);
    }
    else {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar3,
                       &DAT_ram_481b4c88,"uart_reenable_intr_mask",0x1f1);
    }
  }
  return cVar6;
}


