/* Firmware entry: 0x481460ca */

int FUN_ram_481460ca(int param_1,uint *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48147794(*param_2,param_1);
  if (((iVar1 != 0) || ((*param_2 & 0xf0) == 0xe0)) || (*param_2 == 0)) {
    return -0x10;
  }
  iVar1 = FUN_ram_48145a08(param_2,1,param_1);
  if (iVar1 < 0) {
    return (int)(char)iVar1;
  }
  iVar8 = iVar1 * 0x18;
  iVar9 = param_1 + 0xe0;
  piVar6 = param_3;
  if ((&DAT_ram_4ff6cf5c)[iVar8] == '\0') {
    (&DAT_ram_4ff6cf50)[iVar1 * 6] = param_1;
    (&DAT_ram_4ff6cf5c)[iVar8] = 1;
    iVar2 = FUN_ram_481457ba(param_1,iVar9,&DAT_ram_48237090,iVar9,param_1 + 4,&DAT_ram_48237088,
                             param_2,1);
    if (param_3 == (int *)0x0) {
      return -(uint)(iVar2 != 0);
    }
    if (1 < (byte)(&DAT_ram_4ff6cf5c)[iVar8]) goto LAB_ram_481461e6;
    if ((&DAT_ram_4ff6cf5c)[iVar8] != 1) {
      return -(uint)(iVar2 != 0);
    }
  }
  else {
    if (param_3 == (int *)0x0) {
      iVar9 = FUN_ram_481457ba(param_1,iVar9,&DAT_ram_48237090,iVar9,param_1 + 4,&DAT_ram_48237088,
                               param_2,1);
      if (iVar9 != 0) {
        return -1;
      }
      if ((&DAT_ram_4ff6cf5c)[iVar8] != '\x01') {
        return 0;
      }
      (&DAT_ram_4ff6cf5a)[iVar1 * 0xc] = 0;
      return 0;
    }
    if ((&DAT_ram_4ff6cf5c)[iVar8] != '\x01') {
LAB_ram_481461e6:
      DAT_ram_4ff6e218 = (char)iVar1;
      iVar1 = FUN_ram_4814ca06(param_1,param_3,iVar9,&DAT_ram_4ff6cf54 + iVar1 * 0x18,0x800);
      return iVar1;
    }
  }
  while( true ) {
    if ((*(short *)((int)piVar6 + 10) == (short)piVar6[2]) && (*piVar6 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/etharp.c",0x3fa,"etharp_query",
                       "no packet queues allowed!");
    }
    if ((*(byte *)(piVar6 + 3) & 0x40) != 0) break;
    piVar6 = (int *)*piVar6;
    if (piVar6 == (int *)0x0) {
      FUN_ram_4813b0e6(param_3);
LAB_ram_48146274:
      puVar3 = (undefined4 *)FUN_ram_4813956e(10);
      if (puVar3 == (undefined4 *)0x0) {
        FUN_ram_4813ac74(param_3);
        return -1;
      }
      puVar4 = *(undefined4 **)(&DAT_ram_4ff6cf48 + iVar1 * 0x18);
      *puVar3 = 0;
      puVar3[1] = param_3;
      if (puVar4 == (undefined4 *)0x0) {
        *(undefined4 **)(&DAT_ram_4ff6cf48 + iVar1 * 0x18) = puVar3;
      }
      else if ((undefined4 *)*puVar4 == (undefined4 *)0x0) {
        *puVar4 = puVar3;
      }
      else {
        uVar5 = 1;
        puVar4 = (undefined4 *)*puVar4;
        do {
          puVar7 = puVar4;
          uVar5 = uVar5 + 1;
          puVar4 = (undefined4 *)*puVar7;
        } while ((undefined4 *)*puVar7 != (undefined4 *)0x0);
        *puVar7 = puVar3;
        if (2 < uVar5) {
          *puVar7 = 0;
          FUN_ram_4813ac74(param_3);
          FUN_ram_48139604(10,puVar3);
          return -1;
        }
      }
      return 0;
    }
  }
  param_3 = (int *)FUN_ram_4813b5b8(0xe,0x280,param_3);
  if (param_3 == (int *)0x0) {
    return -1;
  }
  goto LAB_ram_48146274;
}


