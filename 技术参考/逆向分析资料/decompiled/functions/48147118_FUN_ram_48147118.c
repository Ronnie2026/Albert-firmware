/* Firmware entry: 0x48147118 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_48147118(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar6 = *(byte **)(param_1 + 4);
  if (*pbVar6 >> 4 != 4) goto LAB_ram_4814720e;
  uVar7 = (*pbVar6 & 0xf) * 4;
  uVar4 = FUN_ram_48137fc8(*(undefined2 *)(pbVar6 + 2));
  if (uVar4 < *(ushort *)(param_1 + 8)) {
    FUN_ram_4813af5e(param_1,uVar4);
    uVar2 = *(ushort *)(param_1 + 10);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 10);
  }
  if (((uVar2 < uVar7) || (*(ushort *)(param_1 + 8) < uVar4)) || (uVar7 < 0x14))
  goto LAB_ram_4814720e;
  _DAT_ram_4ff6cde0 = *(uint *)(pbVar6 + 0x10);
  DAT_ram_4ff6cdf4 = 0;
  DAT_ram_4ff6cdec = 0;
  DAT_ram_4ff6cde8 = 0;
  DAT_ram_4ff6cde4 = 0;
  DAT_ram_4ff6cdf0 = 0;
  DAT_ram_4ff6cdc8 = *(uint *)(pbVar6 + 0xc);
  DAT_ram_4ff6cddc = 0;
  DAT_ram_4ff6cdd4 = 0;
  DAT_ram_4ff6cdd0 = 0;
  DAT_ram_4ff6cdcc = 0;
  DAT_ram_4ff6cdd8 = 0;
  piVar8 = (int *)param_2;
  if ((_DAT_ram_4ff6cde0 & 0xf0) == 0xe0) {
    if ((*(byte *)(param_2 + 0xe7) & 0x20) == 0) {
      if (pbVar6[9] == 0x11) {
        sVar3 = *(short *)(pbVar6 + uVar7 + 2);
        goto joined_r0x481472b8;
      }
LAB_ram_48147202:
      if (DAT_ram_4ff6cdc8 == 0) goto LAB_ram_4814720e;
      piVar8 = (int *)0;
      goto LAB_ram_48147372;
    }
    iVar5 = FUN_ram_48146bf2(param_2,&DAT_ram_4ff6cde0);
    if (iVar5 == 0) goto LAB_ram_48147294;
    if (DAT_ram_4ff6cdc8 != 0) goto LAB_ram_48147372;
  }
  else {
    if ((((*(byte *)(param_2 + 0xe7) & 1) == 0) || (*(uint *)(param_2 + 4) == 0)) ||
       ((_DAT_ram_4ff6cde0 != *(uint *)(param_2 + 4) &&
        (iVar5 = FUN_ram_48147794(_DAT_ram_4ff6cde0,param_2), iVar5 == 0)))) {
      piVar8 = DAT_ram_4ff6e1ac;
      if ((_DAT_ram_4ff6cde0 & 0xff) != 0x7f) {
        for (; piVar8 != (int *)0x0; piVar8 = (int *)*piVar8) {
          if ((((int *)param_2 != piVar8) && ((*(byte *)((int)piVar8 + 0xe7) & 1) != 0)) &&
             ((piVar8[1] != 0 &&
              ((piVar8[1] == _DAT_ram_4ff6cde0 ||
               (iVar5 = FUN_ram_48147794(_DAT_ram_4ff6cde0,piVar8), iVar5 != 0))))))
          goto joined_r0x48147418;
        }
      }
LAB_ram_48147294:
      if (pbVar6[9] == 0x11) {
        sVar3 = *(short *)(pbVar6 + uVar7 + 2);
joined_r0x481472b8:
        piVar8 = (int *)param_2;
        if (sVar3 == 0x4400) goto LAB_ram_481472be;
      }
      goto LAB_ram_48147202;
    }
joined_r0x48147418:
    if (DAT_ram_4ff6cdc8 == 0) goto LAB_ram_481472be;
LAB_ram_48147372:
    iVar5 = FUN_ram_48147794(DAT_ram_4ff6cdc8,param_2);
    if (((iVar5 != 0) || ((DAT_ram_4ff6cdc8 & 0xf0) == 0xe0)) || (piVar8 == (int *)0x0))
    goto LAB_ram_4814720e;
  }
LAB_ram_481472be:
  if ((pbVar6[6] & 0x3f) == 0 && pbVar6[7] == 0) {
    DAT_ram_4ff6cdc4 = (*pbVar6 & 0xf) << 2;
    DAT_ram_4ff6cdb4 = (int)piVar8;
    DAT_ram_4ff6cdb8 = param_2;
    DAT_ram_4ff6cdbc = pbVar6;
    iVar5 = FUN_ram_4813b660(param_1,param_2);
    if (iVar5 != 1) {
      FUN_ram_4813ab98(param_1,uVar7);
      bVar1 = pbVar6[9];
      if (bVar1 == 6) {
        FUN_ram_4813f5d0(param_1,param_2);
      }
      else {
        if (bVar1 < 7) {
          if (bVar1 == 1) {
            FUN_ram_481464bc(param_1,param_2);
            DAT_ram_4ff6cdb4 = 0;
            DAT_ram_4ff6cdb8 = 0;
            DAT_ram_4ff6cdbc = (byte *)0x0;
            DAT_ram_4ff6cdc4 = 0;
            DAT_ram_4ff6cdc8 = 0;
            _DAT_ram_4ff6cde0 = 0;
            return 0;
          }
          if (bVar1 == 2) {
            FUN_ram_48146c08(param_1,param_2,&DAT_ram_4ff6cde0);
            DAT_ram_4ff6cdb4 = 0;
            DAT_ram_4ff6cdb8 = 0;
            DAT_ram_4ff6cdbc = (byte *)0x0;
            DAT_ram_4ff6cdc4 = 0;
            DAT_ram_4ff6cdc8 = 0;
            _DAT_ram_4ff6cde0 = 0;
            return 0;
          }
        }
        else if (bVar1 == 0x11) {
          FUN_ram_48142854(param_1,param_2);
          DAT_ram_4ff6cdb4 = 0;
          DAT_ram_4ff6cdb8 = 0;
          DAT_ram_4ff6cdbc = (byte *)0x0;
          DAT_ram_4ff6cdc4 = 0;
          DAT_ram_4ff6cdc8 = 0;
          _DAT_ram_4ff6cde0 = 0;
          return 0;
        }
        if (((iVar5 != 2) && (iVar5 = FUN_ram_48147794(_DAT_ram_4ff6cde0,piVar8), iVar5 == 0)) &&
           ((_DAT_ram_4ff6cde0 & 0xf0) != 0xe0)) {
          FUN_ram_4813abfa(param_1,uVar7);
          FUN_ram_481466dc(param_1,2);
        }
        FUN_ram_4813ac74(param_1);
      }
    }
    DAT_ram_4ff6cdb4 = 0;
    DAT_ram_4ff6cdb8 = 0;
    DAT_ram_4ff6cdbc = (byte *)0x0;
    DAT_ram_4ff6cdc4 = 0;
    DAT_ram_4ff6cdc8 = 0;
    _DAT_ram_4ff6cde0 = 0;
    return 0;
  }
LAB_ram_4814720e:
  FUN_ram_4813ac74(param_1);
  return 0;
}


