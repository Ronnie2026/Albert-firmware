/* Firmware entry: 0x48134598 */

uint FUN_ram_48134598(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int aiStack_34 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar7 = 0x7fffffff;
  if (-1 < (int)param_3) {
    uVar7 = param_3;
  }
  if ((*(uint *)*param_1 & 0xf0) != 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x3cc,"lwip_recv_tcp",
                     "this should be checked internally");
  }
  iVar6 = (param_4 >> 1 & 4) + 8;
  uVar2 = 0;
  do {
    iVar4 = param_1[1];
    if (param_1[1] == 0) {
      iVar6 = FUN_ram_4814f3c0(*param_1,aiStack_34,iVar6);
      if (iVar6 != 0) {
        if ((int)uVar2 < 1) {
          iVar4 = FUN_ram_481517ce();
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_ram_4819bf88();
            uVar3 = FUN_ram_481517ce(iVar6);
            *puVar5 = uVar3;
          }
          return -(uint)(iVar6 != -0xf);
        }
        if ((param_4 & 1) != 0) {
          return uVar2;
        }
        goto LAB_ram_4813467e;
      }
      if (aiStack_34[0] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x3f2,"lwip_recv_tcp",
                         "p != NULL");
      }
      param_1[1] = aiStack_34[0];
      iVar4 = aiStack_34[0];
    }
    aiStack_34[0] = iVar4;
    uVar1 = (uint)*(ushort *)(aiStack_34[0] + 8);
    if ((int)uVar1 < (int)uVar7) {
      if ((int)(0x7fffffff - uVar1) < (int)uVar2) goto LAB_ram_48134636;
      FUN_ram_4813b38c(aiStack_34[0],param_2 + uVar2,uVar1,0);
      uVar8 = uVar1;
    }
    else {
      if ((int)(0x7fffffff - uVar7) < (int)uVar2) {
LAB_ram_48134636:
        uVar1 = ~uVar2 & 0xffff;
        uVar8 = uVar1;
      }
      else {
        uVar1 = uVar7 & 0xffff;
        uVar8 = uVar7;
      }
      FUN_ram_4813b38c(aiStack_34[0],param_2 + uVar2,uVar1,0);
      if ((int)uVar7 < (int)uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x40a,"lwip_recv_tcp",
                         "invalid copylen, len would underflow");
      }
    }
    uVar2 = uVar2 + uVar8;
    if ((param_4 & 1) != 0) {
      return uVar2;
    }
    if (*(ushort *)(aiStack_34[0] + 8) < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x410,"lwip_recv_tcp",
                       "invalid copylen");
    }
    if ((int)uVar8 < (int)(uint)*(ushort *)(aiStack_34[0] + 8)) {
      uVar3 = FUN_ram_4813b06a(aiStack_34[0],uVar1);
      param_1[1] = uVar3;
    }
    else {
      param_1[1] = 0;
      FUN_ram_4813ac74();
    }
    uVar7 = uVar7 - uVar8;
    iVar6 = 0x1c;
  } while (uVar7 != 0);
  if (0 < (int)uVar2) {
LAB_ram_4813467e:
    FUN_ram_4814f37a(*param_1,uVar2);
  }
  return uVar2;
}


