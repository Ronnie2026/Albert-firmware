/* Firmware entry: 0x4818a182 */

int FUN_ram_4818a182(uint *param_1,byte *param_2,uint *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iStack_38;
  int aiStack_34 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar4 = param_3;
LAB_ram_4818a1b0:
  iVar3 = FUN_ram_4817f40e(param_1,param_2,&iStack_38,0x31);
  if (iVar3 == 0) {
    pbVar7 = (byte *)(*param_1 + iStack_38);
    iVar3 = FUN_ram_4817f40e(param_1,pbVar7,aiStack_34,0x30);
    if (iVar3 != 0) goto LAB_ram_4818a282;
LAB_ram_4818a1dc:
    pbVar2 = (byte *)*param_1 + aiStack_34[0];
    if (aiStack_34[0] < 1) {
LAB_ram_4818a2d4:
      iVar3 = -0x23e0;
    }
    else {
      *puVar4 = (uint)*(byte *)*param_1;
      iVar3 = FUN_ram_4817f40e(param_1,pbVar2,puVar4 + 1,6);
      if (iVar3 != 0) goto LAB_ram_4818a282;
      uVar5 = *param_1;
      puVar4[2] = uVar5;
      pbVar6 = (byte *)(uVar5 + puVar4[1]);
      *param_1 = (uint)pbVar6;
      if ((int)pbVar2 - (int)pbVar6 < 1) goto LAB_ram_4818a2d4;
      if ((*pbVar6 < 0x1f) && ((0x50581008U >> (*pbVar6 & 0x1f) & 1) != 0)) {
        *param_1 = (uint)(pbVar6 + 1);
        puVar4[3] = (uint)*pbVar6;
        iVar3 = FUN_ram_4817f2d4(param_1,pbVar2,puVar4 + 4);
        if (iVar3 != 0) goto LAB_ram_4818a282;
        uVar5 = *param_1;
        puVar4[5] = uVar5;
        pbVar6 = (byte *)(uVar5 + puVar4[4]);
        *param_1 = (uint)pbVar6;
        if (pbVar2 == pbVar6) {
          puVar4[6] = 0;
          puVar1 = puVar4;
          do {
            if (pbVar7 == pbVar6) {
              if (param_2 == pbVar7) {
                return 0;
              }
              puVar4 = (uint *)thunk_FUN_ram_4817b126(1,0x20);
              puVar1[6] = (uint)puVar4;
              if (puVar4 != (uint *)0x0) goto LAB_ram_4818a1b0;
LAB_ram_4818a2a6:
              iVar3 = -0x2880;
              goto LAB_ram_4818a2ac;
            }
            *(undefined1 *)(puVar1 + 7) = 1;
            puVar4 = (uint *)thunk_FUN_ram_4817b126(1,0x20);
            puVar1[6] = (uint)puVar4;
            if (puVar4 == (uint *)0x0) goto LAB_ram_4818a2a6;
            iVar3 = FUN_ram_4817f40e(param_1,pbVar7,aiStack_34,0x30);
            if (iVar3 == 0) goto LAB_ram_4818a1dc;
LAB_ram_4818a282:
            iVar3 = iVar3 + -0x2380;
            if (iVar3 != 0) goto LAB_ram_4818a2ac;
            pbVar6 = (byte *)*param_1;
            puVar1 = puVar4;
          } while( true );
        }
        iVar3 = -0x23e6;
      }
      else {
        iVar3 = -0x23e2;
      }
    }
  }
  else {
    iVar3 = iVar3 + -0x2380;
  }
LAB_ram_4818a2ac:
  FUN_ram_4817fa3c(param_3[6]);
  param_3[6] = 0;
  return iVar3;
}


