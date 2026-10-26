/* Firmware entry: 0x4815da28 */

uint FUN_ram_4815da28(int *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4815d670(param_3);
  iVar4 = *param_1;
  do {
    if (iVar4 == 0) {
      return 0xffffffff;
    }
    iVar3 = *(int *)(iVar4 + 8);
    iVar5 = 0;
    if (iVar3 != 0) {
      do {
        while( true ) {
          iVar6 = iVar5 * 4 + iVar4;
          uVar2 = (uint)*(byte *)(iVar6 + 0xc);
          iVar5 = iVar5 + 1;
          if ((param_2 <= uVar2) && (*(uint *)(iVar6 + 0xc) >> 8 == (uVar1 & 0xffffff))) break;
          if (iVar5 == iVar3) goto LAB_ram_4815da6a;
        }
        if (uVar2 != 0xff) {
          return uVar2;
        }
      } while (iVar5 != iVar3);
    }
LAB_ram_4815da6a:
    iVar4 = *(int *)(iVar4 + 4);
  } while( true );
}


