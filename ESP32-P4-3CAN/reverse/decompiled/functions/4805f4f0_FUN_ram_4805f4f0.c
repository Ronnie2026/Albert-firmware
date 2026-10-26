/* Firmware entry: 0x4805f4f0 */

undefined4 FUN_ram_4805f4f0(int *param_1,char *param_2,int *param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  char cStack_a1;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  int iStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char cStack_70;
  int iStack_58;
  undefined4 uStack_54;
  undefined1 uStack_38;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((((char)param_1[1] == '\x01') && ((char)param_1[0xe] != '\0')) && (*param_2 != '\0')) &&
     (param_2[0x16] != '\0')) {
    iVar6 = *param_1;
    iVar8 = iVar6 + 0xc;
    FUN_ram_4ff3ec14(iVar8,0xffffffff);
    bVar1 = *(byte *)(iVar6 + 0x3bf6);
    FUN_ram_4ff3ee10(iVar8);
    if ((((bVar1 & 6) == 0) && ((uint)(param_4 - param_1[0xc]) < 0x7a121)) &&
       ((iVar6 = param_1[0xb], iVar6 != 0 &&
        (iVar8 = (**(code **)(*param_3 + 0x84))(param_3,0), iVar6 == iVar8)))) {
      piVar7 = param_1 + 3;
      iVar6 = FUN_ram_4ff22ce0(&DAT_ram_4ff4b8c8,piVar7);
      if (((iVar6 == 0) && ((char)param_1[1] == '\x01')) &&
         (((char)param_1[0xe] != '\0' && ((*param_2 != '\0' && (param_2[0x16] != '\0')))))) {
        iVar6 = *param_1;
        iVar8 = iVar6 + 0xc;
        FUN_ram_4ff3ec14(iVar8,0xffffffff);
        bVar1 = *(byte *)(iVar6 + 0x3bf6);
        FUN_ram_4ff3ee10(iVar8);
        if ((((bVar1 & 6) == 0) &&
            ((((uint)(param_4 - param_1[0xc]) < 0x7a121 && (iVar6 = param_1[0xb], iVar6 != 0)) &&
             (iVar8 = (**(code **)(*param_3 + 0x84))(param_3,0), iVar6 == iVar8)))) &&
           (iVar6 = FUN_ram_4ff22ce0(&DAT_ram_4ff4b8c8,piVar7), uStack_7c = DAT_ram_48222d68,
           uStack_80 = DAT_ram_48222d64, uStack_84 = DAT_ram_48222d60, iStack_88 = DAT_ram_48222d5c,
           iStack_8c = DAT_ram_48222d58, uStack_90 = DAT_ram_48222d54, uStack_94 = DAT_ram_48222d50,
           uStack_98 = DAT_ram_48222d4c, uStack_9c = DAT_ram_48222d48, iVar6 == 0)) {
          uVar4 = (uint)(byte)param_2[0x1a];
          uVar5 = 5000;
          if (uVar4 != 0) {
            if (100 < uVar4) {
              uVar4 = 100;
            }
            uVar5 = uVar4 * 1000;
          }
          if (uVar5 <= (uint)(param_4 - param_1[0xd])) {
            cVar2 = *(char *)((int)param_1 + 0x19);
            param_1[0xd] = param_4;
            if ((((cVar2 == '\x01') && (param_1[3] == 0x3fd)) &&
                ((iVar6 = param_1[4], (char)iVar6 == '\b' &&
                 (((*(byte *)((int)param_1 + 0x11) & 7) == 0 && (*param_2 != '\0')))))) &&
               (param_2[0x16] != '\0')) {
              FUN_ram_4ff2287e(&uStack_78,&uStack_9c,piVar7,param_2);
              if ((uStack_74._2_1_ != '\0') && ((char)uStack_74 == '\0')) {
                uStack_84 = uStack_84 & 0xfe00 | 0x1d040100;
                uStack_90 = CONCAT22(&sedeleg,(undefined2)uStack_90);
                uStack_80 = 0;
                iStack_8c = param_4;
                iStack_88 = param_4;
                memset(&uStack_78,0,0x48);
                uStack_38 = 0xff;
                uStack_78 = (**(code **)(*param_3 + 0x154))(param_3,(char)param_1[1]);
                iStack_58 = param_1[0xb];
                uStack_54 = *(undefined4 *)(param_2 + 0x24);
                uStack_74 = param_4 + 2000;
                uStack_a0 = 0;
                cStack_a1 = (char)iVar6;
                cStack_70 = cVar2;
                uVar3 = (**(code **)(*param_3 + 0xdc))
                                  (param_3,&uStack_9c,&uStack_78,&cStack_a1,&uStack_a0,
                                   *(code **)(*param_3 + 0xdc));
                return uVar3;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


