/* Firmware entry: 0x4808b604 */

undefined4 FUN_ram_4808b604(uint param_1,byte *param_2)

{
  byte bVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0;
  }
  pvVar2 = memchr(param_2,0x3a,param_1);
  if ((pvVar2 != (void *)0x0) && (uVar9 = (int)pvVar2 - (int)param_2, uVar9 != 0xffffffff)) {
    uVar4 = uVar9 + 1;
    if (param_1 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_48195164("%s: __pos (which is %zu) > __size (which is %zu)",
                       "basic_string_view::substr",uVar4,param_1);
    }
    if (4 < (param_1 - 1) - uVar4) {
      return 0;
    }
    if (uVar4 == param_1) {
      return 0;
    }
    pbVar5 = param_2 + uVar4;
    iVar7 = 0;
    do {
      bVar1 = *pbVar5;
      if (9 < (bVar1 - 0x30 & 0xff)) {
        return 0;
      }
      pbVar5 = pbVar5 + 1;
      iVar7 = (bVar1 - 0x30) + iVar7 * 10;
    } while (param_2 + param_1 != pbVar5);
    if (0xfffe < iVar7 - 1U) {
      return 0;
    }
    if (uVar9 < param_1) {
      param_1 = uVar9;
    }
    if (param_1 == 0) {
      return 0;
    }
  }
  uVar3 = 0;
  if (0xfd < param_1) {
    return 0;
  }
  uVar8 = 0;
  uVar4 = 1;
  uVar9 = 0;
  pbVar5 = param_2;
  if (param_1 == 0) goto LAB_ram_4808b6ec;
  do {
    bVar1 = *pbVar5;
    if (bVar1 == 0x2e) goto LAB_ram_4808b6ec;
    uVar6 = uVar4;
    if ((byte)((bVar1 & 0xdf) + 0xbf) < 0x1a) {
      uVar3 = 1;
    }
    else if ((9 < (byte)(bVar1 - 0x30)) && (bVar1 != 0x2d)) {
      return 0;
    }
    while( true ) {
      uVar8 = uVar8 + 1;
      pbVar5 = pbVar5 + 1;
      uVar4 = uVar6 + 1;
      if (param_1 < uVar6) {
        return uVar3;
      }
      if (uVar8 != param_1) break;
LAB_ram_4808b6ec:
      if (uVar8 == uVar9) {
        return 0;
      }
      if (0x3f < uVar8 - uVar9) {
        return 0;
      }
      if (param_2[uVar9] == 0x2d) {
        return 0;
      }
      uVar6 = uVar4;
      uVar9 = uVar4;
      if (pbVar5[-1] == 0x2d) {
        return 0;
      }
    }
  } while( true );
}


