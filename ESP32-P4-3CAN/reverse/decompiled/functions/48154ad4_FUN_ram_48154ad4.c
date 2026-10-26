/* Firmware entry: 0x48154ad4 */

void FUN_ram_48154ad4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  if ((*(byte *)(iVar1 + 0x22) & 0x40) != 0) {
    FUN_ram_4814268a(&LAB_ram_48155ace,iVar1 + 0x24);
    *(byte *)(iVar1 + 0x22) = *(byte *)(iVar1 + 0x22) & 0xbf;
  }
  FUN_ram_48151bf0(iVar1);
  FUN_ram_4814ceda(iVar1,0x5dc,0xffffffff,0,0);
  uVar2 = 0xffffffff;
  if ((*(ushort *)(iVar1 + 100) & 8) != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x68);
  }
  FUN_ram_4814cef8(iVar1,0x5dc,uVar2,*(uint *)(iVar1 + 100) >> 5 & 1,*(uint *)(iVar1 + 100) >> 6 & 1
                  );
  *(undefined2 *)(iVar1 + 0xd0) = 0x5dc;
  return;
}


