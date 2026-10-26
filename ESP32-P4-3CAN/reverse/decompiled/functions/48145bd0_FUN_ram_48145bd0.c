/* Firmware entry: 0x48145bd0 */

int FUN_ram_48145bd0(int param_1,uint *param_2,undefined1 *param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined1 uVar9;
  int iVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0xe6) != '\x06') {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/etharp.c",0x1aa,
                     "etharp_update_arp_entry","netif->hwaddr_len == ETH_HWADDR_LEN");
  }
  if ((param_2 == (uint *)0x0) || (*param_2 == 0)) {
    iVar7 = -0x10;
  }
  else {
    iVar7 = FUN_ram_48147794(*param_2,param_1);
    if ((iVar7 == 0) && ((*param_2 & 0xf0) != 0xe0)) {
      iVar7 = FUN_ram_48145a08(param_2,param_4,param_1);
      if (iVar7 < 0) {
        return (int)(char)iVar7;
      }
      if ((param_4 & 4) == 0) {
        iVar10 = iVar7 * 2;
        if ((&DAT_ram_4ff6cf5c)[iVar7 * 0x18] == '\x05') {
          return -6;
        }
        uVar9 = 2;
      }
      else {
        uVar9 = 5;
        iVar10 = iVar7 << 1;
      }
      iVar10 = iVar10 + iVar7;
      iVar7 = iVar10 * 8;
      piVar6 = (int *)(&DAT_ram_4ff6cf48 + iVar7);
      (&DAT_ram_4ff6cf5c)[iVar7] = uVar9;
      (&DAT_ram_4ff6cf50)[iVar10 * 2] = param_1;
      uVar9 = param_3[3];
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[4];
      uVar4 = param_3[5];
      (&DAT_ram_4ff6cf54)[iVar7] = *param_3;
      (&DAT_ram_4ff6cf55)[iVar7] = uVar1;
      (&DAT_ram_4ff6cf56)[iVar7] = uVar2;
      (&DAT_ram_4ff6cf57)[iVar7] = uVar9;
      (&DAT_ram_4ff6cf58)[iVar7] = uVar3;
      (&DAT_ram_4ff6cf59)[iVar7] = uVar4;
      piVar8 = (int *)*piVar6;
      (&DAT_ram_4ff6cf5a)[iVar10 * 4] = 0;
      while (piVar8 != (int *)0x0) {
        uVar5 = piVar8[1];
        *piVar6 = *piVar8;
        FUN_ram_48139604(10);
        FUN_ram_4814ca06(param_1,uVar5,param_1 + 0xe0,param_3,0x800);
        FUN_ram_4813ac74(uVar5);
        piVar8 = (int *)*piVar6;
      }
      iVar7 = 0;
    }
    else {
      iVar7 = -0x10;
    }
  }
  return iVar7;
}


