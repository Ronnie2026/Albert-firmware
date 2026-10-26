/* Firmware entry: 0x4813490a */

int FUN_ram_4813490a(undefined4 *param_1,uint param_2,int *param_3,ushort *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  ushort uVar6;
  uint uVar7;
  int *piStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3[2] == 0) {
    if (0 < param_3[3]) {
      return -0x10;
    }
    piStack_24 = (int *)param_1[1];
    if (piStack_24 != (int *)0x0) {
      uVar6 = *(ushort *)(*piStack_24 + 8);
      goto LAB_ram_4813498e;
    }
LAB_ram_481349fa:
    iVar2 = FUN_ram_4814f3d6(*param_1,&piStack_24,param_2 >> 1 & 4);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (piStack_24 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x48b,"lwip_recvfrom_udp_raw",
                       "buf != NULL");
    }
    param_1[1] = piStack_24;
  }
  else {
    piStack_24 = (int *)param_1[1];
    if (piStack_24 == (int *)0x0) goto LAB_ram_481349fa;
  }
  iVar2 = 0;
  uVar6 = *(ushort *)(*piStack_24 + 8);
  uVar7 = (uint)uVar6;
  uVar3 = 0;
  if ((0 < param_3[3]) && (uVar7 != 0)) {
    do {
      puVar5 = (undefined4 *)(param_3[2] + iVar2 * 8);
      uVar4 = puVar5[1];
      uVar1 = uVar7;
      if (uVar4 <= (uVar7 - uVar3 & 0xffff)) {
        uVar1 = (uVar4 & 0xffff) + uVar3 & 0xffff;
      }
      uVar3 = uVar1;
      iVar2 = iVar2 + 1;
      FUN_ram_4813b38c(*piStack_24,*puVar5);
    } while ((iVar2 < param_3[3]) && (uVar3 < uVar7));
  }
LAB_ram_4813498e:
  if ((*param_3 != 0) && (param_3[1] != 0)) {
    FUN_ram_48134802(*param_1,piStack_24 + 2,(short)piStack_24[8],*param_3,param_3 + 1);
  }
  param_3[6] = 0;
  if (param_3[4] != 0) {
    param_3[5] = 0;
  }
  if ((param_2 & 1) == 0) {
    param_1[1] = 0;
    FUN_ram_481517f0(piStack_24);
  }
  if (param_4 != (ushort *)0x0) {
    *param_4 = uVar6;
  }
  return 0;
}


