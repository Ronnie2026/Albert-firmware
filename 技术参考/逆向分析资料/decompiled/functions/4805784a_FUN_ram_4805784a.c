/* Firmware entry: 0x4805784a */

char FUN_ram_4805784a(char *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_2 == '\0') {
    return '\0';
  }
  cVar2 = '\0';
  if ((((*(int *)(param_2 + 8) != 0) && (*(int *)(param_2 + 0xc) == *(int *)(param_1 + 0x24))) &&
      (*(short *)(param_2 + 2) == *(short *)(param_1 + 0x4a))) &&
     (((cVar2 = '\0', *param_1 != '\0' && (cVar2 = '\0', param_1[0x6b] != '\0')) &&
      ((cVar2 = '\0', param_1[0x6c] != '\0' && (cVar2 = '\0', param_1[0x6d] != '\0')))))) {
    cVar2 = '\0';
    if (param_1[0x70] != '\0') {
      if (param_1[0x6a] == '\0') {
        cVar2 = '\0';
        if (((((uint)(param_3 - *(int *)(param_1 + 0x2c)) < 0x1f5) &&
             ((uint)(param_3 - *(int *)(param_1 + 0x30)) < 0x1f5)) &&
            ((param_1[0x7b] == '\0' &&
             ((param_1[0x71] == '\0' || (cVar2 = '\0', param_1[0x7e] != '\0')))))) &&
           ((param_1[0xc] == '\0' ||
            ((param_1[0xd] != '\0' || (cVar2 = '\0', param_1[0x7e] != '\0')))))) {
          if (param_2[0x11] != '\0') {
            if (param_1[0x60] == '\0') {
              gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
              return '\0';
            }
            if (*(ushort *)(param_2 + 4) < *(ushort *)(param_1 + 0x5a)) {
              gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
              return '\0';
            }
          }
          cVar2 = param_1[0x70];
          if ((((param_2[0x10] != '\0') && (cVar2 = '\0', param_1[0x62] != '\0')) &&
              (cVar2 = '\0', param_1[99] != '\0')) &&
             (cVar2 = '\0', (uint)(param_3 - *(int *)(param_1 + 0x50)) < 0x1f5)) {
            uVar1 = *(ushort *)(param_2 + 4);
            uVar3 = FUN_ram_4805777e(param_1);
            iVar6 = 100000;
            if (param_1[0x6f] != '\0') {
              iVar6 = 0x274a6;
            }
            iVar5 = *(uint *)(param_1 + 0x54) * 1000;
            uVar7 = iVar5 - 1;
            uVar4 = uVar7 + iVar6;
            uVar8 = __udivdi3(uVar4,((int)((ulonglong)*(uint *)(param_1 + 0x54) * 1000 >> 0x20) -
                                    (uint)(iVar5 == 0)) + (uint)(uVar4 < uVar7),iVar6,0);
            uVar4 = (uint)uVar8;
            if (((int)((ulonglong)uVar8 >> 0x20) != 0) || (0xff < uVar4)) {
              uVar4 = 0xff;
            }
            uVar7 = uVar4 << 1;
            if ((uVar4 & 0x7fff) << 1 < uVar3) {
              uVar7 = uVar3;
            }
            cVar2 = (uVar7 & 0xffff) <= (uint)uVar1;
          }
        }
      }
      else {
        cVar2 = '\0';
      }
    }
  }
  return cVar2;
}


