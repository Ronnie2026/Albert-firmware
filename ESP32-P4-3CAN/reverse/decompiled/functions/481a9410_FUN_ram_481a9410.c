/* Firmware entry: 0x481a9410 */

void FUN_ram_481a9410(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar2 = (undefined4 *)*param_3;
  if (param_3[1] != 0) {
    puVar2 = (undefined4 *)*puVar2;
  }
  bVar1 = *(byte *)(param_3 + 3);
  uVar8 = param_3[2];
  if (uVar8 == 0) {
    if ((bVar1 & 8) == 0) {
      cVar9 = puVar2 != (undefined4 *)0x0;
joined_r0x481a9514:
      if ((bVar1 & 1) == 0) {
        uVar3 = __bswapsi2((int)puVar2 << 0x15);
        uVar8 = __bswapsi2(~(uVar8 << 0x15));
        uVar7 = 1;
      }
      else {
        uVar3 = __bswapsi2((int)puVar2 << 3);
        cVar9 = cVar9 << 1;
        uVar8 = __bswapsi2(~(uVar8 << 3));
        uVar7 = 1;
      }
      goto LAB_ram_481a9442;
    }
    if (puVar2 == (undefined4 *)0x0) {
      uVar8 = 0xffffffff;
      uVar7 = 0;
      cVar9 = '\0';
      uVar3 = 0;
      goto LAB_ram_481a9442;
    }
LAB_ram_481a94ee:
    uVar7 = 0;
  }
  else {
    if ((uVar8 != 0xffffffff) || (puVar2 != (undefined4 *)0xffffffff)) {
      if ((bVar1 & 8) == 0) {
        cVar9 = true;
        goto joined_r0x481a9514;
      }
      goto LAB_ram_481a94ee;
    }
    uVar7 = (uint)((bVar1 & 8) == 0);
  }
  cVar9 = (bVar1 & 1) + 1;
  uVar3 = __bswapsi2(puVar2);
  uVar8 = __bswapsi2(~uVar8);
LAB_ram_481a9442:
  puVar6 = (uint *)*param_1;
  *(char *)(param_1 + 5) = cVar9;
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    puVar6[iVar4 + 0x10] = puVar6[iVar4 + 0x10] & 0xffffff00 | uVar3 >> (iVar4 << 3 & 0x1fU) & 0xff;
    puVar6[iVar4 + 0x14] = uVar8 >> (iVar4 << 3 & 0x1fU) & 0xff | puVar6[iVar4 + 0x14] & 0xffffff00;
    iVar4 = iVar5;
  } while (iVar5 != 4);
  *puVar6 = *puVar6 & 0xfffffff7 | uVar7 << 3;
  return;
}


