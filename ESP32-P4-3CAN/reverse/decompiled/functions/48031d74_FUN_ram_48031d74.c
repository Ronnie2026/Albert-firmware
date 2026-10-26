/* Firmware entry: 0x48031d74 */

void FUN_ram_48031d74(uint param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar2 = &DAT_ram_48222640;
  iVar5 = 0;
  do {
    uVar3 = *(uint *)(puVar2 + 4);
    uVar4 = 0xffffffff;
    if (DAT_ram_4ff6dc5f < 2) {
      uVar4 = *(uint *)(&DAT_ram_48222610 + ((uint)DAT_ram_4ff6dc5f * 3 + iVar5) * 8);
      if ((int)uVar3 < 0) goto LAB_ram_48031e16;
LAB_ram_48031dca:
      bVar1 = puVar2[0x18];
      iVar6 = *(int *)(puVar2 + 0x1c);
      FUN_ram_481212c6(uVar3 & 0xff,3);
      FUN_ram_481214a0(uVar3 & 0xff,bVar1 == param_1);
      if ((param_1 != 0) && (iVar6 != 0)) {
        thunk_FUN_ram_4ff3c2b6(iVar6);
      }
    }
    else {
      if (-1 < (int)uVar3) goto LAB_ram_48031dca;
LAB_ram_48031e16:
      if (param_1 == 0) {
        FUN_ram_481212c6(uVar4 & 0xff,5);
      }
    }
    iVar5 = iVar5 + 1;
    puVar2 = puVar2 + 0x28;
    if (iVar5 == 3) {
      return;
    }
  } while( true );
}


