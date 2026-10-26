/* Firmware entry: 0x4808b432 */

undefined4 FUN_ram_4808b432(uint param_1,void *param_2)

{
  byte bVar1;
  void *pvVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0;
  }
  pvVar2 = memchr(param_2,0x3a,param_1);
  uVar8 = param_1;
  if (pvVar2 != (void *)0x0) {
    uVar6 = (int)pvVar2 - (int)param_2;
    uVar8 = uVar6;
    if (param_1 <= uVar6) {
      uVar8 = param_1;
    }
    if (uVar6 != 0xffffffff) {
      uVar6 = uVar6 + 1;
      if (param_1 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_48195164("%s: __pos (which is %zu) > __size (which is %zu)",
                         "basic_string_view::substr",uVar6,param_1);
      }
      if ((4 < (param_1 - 1) - uVar6) || (uVar6 == param_1)) {
        return 0;
      }
      pbVar4 = (byte *)((int)param_2 + uVar6);
      iVar5 = 0;
      do {
        bVar1 = *pbVar4;
        if (9 < (bVar1 - 0x30 & 0xff)) {
          return 0;
        }
        pbVar4 = pbVar4 + 1;
        iVar5 = (bVar1 - 0x30) + iVar5 * 10;
      } while ((byte *)((int)param_2 + param_1) != pbVar4);
      if (0xfffe < iVar5 - 1U) {
        return 0;
      }
    }
  }
  iVar5 = 0;
  uVar6 = 0;
  do {
    if (uVar8 <= uVar6) {
      return 0;
    }
    pbVar4 = (byte *)((int)param_2 + uVar6);
    pvVar2 = memchr(pbVar4,0x2e,uVar8 - uVar6);
    uVar7 = uVar8;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (int)pvVar2 - (int)param_2;
      if ((uVar3 != 0xffffffff) && (uVar7 = uVar3, uVar3 <= uVar6)) {
        return 0;
      }
    }
    if (3 < uVar7 - uVar6) {
      return 0;
    }
    if ((uVar7 - uVar6 != 1) && (*pbVar4 == 0x30)) {
      return 0;
    }
    uVar6 = 0;
    do {
      bVar1 = *pbVar4;
      if (9 < (bVar1 - 0x30 & 0xff)) {
        return 0;
      }
      pbVar4 = pbVar4 + 1;
      uVar6 = (bVar1 - 0x30) + uVar6 * 10;
    } while ((byte *)((int)param_2 + uVar7) != pbVar4);
    if (0xff < uVar6) {
      return 0;
    }
    if ((iVar5 != 3) != (uVar3 != 0xffffffff)) {
      return 0;
    }
    iVar5 = iVar5 + 1;
    uVar6 = uVar7 + 1;
  } while (iVar5 != 4);
  return 1;
}


